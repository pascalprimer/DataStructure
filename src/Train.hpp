#ifndef SJTU_TRAIN_HPP
#define SJTU_TRAIN_HPP

#include<string>
#include"Exceptions.hpp"
#include"File.hpp"
#include"lib/ptr.hpp"
#include "Station.hpp"
#include "Tickets.hpp"
#include "lib/ptr.hpp"
//#include"GeneralUser.hpp"

using std::string;
namespace sjtu
{
	class Train
	{
		// friend Station;
	private:
		bool on_sale; vector <Station> route;
        string train_id; Date departure_time;
    public:
		//构造函数
        Train() = default;
		Train(const bool &_on_sale,const vector <Station> &_route,const string &_train_id,const Date &_date)
            :on_sale(_on_sale),route(_route),train_id(_train_id),departure_time(_date){
//std::cout << "build train: " << departure_time.print() << std::endl;
        }
		
		//默认析构函数，默认拷贝构造，默认赋值语句

        /*void search() {
            std::cout << "---------------" << std::endl;
            for (int i = 0; i < route.size(); ++i) {
                std::cout << route[i].query_arrival_time().print() << std::endl;
            }
            std::cout << departure_time.print() << std::endl;
            std::cout << "---------------" << std::endl;
        }*/
		//返回id
		string get_id() const { return train_id; }

		//返回发车时间
		Date get_time() const { return departure_time; }

		//返回出站在start_time到finish_time之间的票，票数不够就返回所有的票,无票throw
        shared_ptr<vector<Tickets> > get_ticket(const string &start_station,const string &finish_station,const Date &start_time,const Date &finish_time,const string &level,int number)
		{
//std::cout << train_id << " " << departure_time.print() <<  std::endl;
            shared_ptr<vector<Tickets> > ret(new vector<Tickets>());
            for (int i = 0; i < route.size(); ++i) {
                if (route[i].query_departure_time() < start_time ||
                    route[i].query_departure_time() > finish_time ||
                    !route[i].is_same_location(start_station)) {
                    continue;
                }
//std::cout << route[i].query_location() << " " << train_id << std::endl;
                for (int j = i + 1; j < route.size(); ++j) {
                    if (!route[j].is_same_location(finish_station)) {
                        continue;
                    }
//std::cout << route[i].query_location() << " " << route[j].query_location() << " " << train_id << std::endl;
                    int min_number = 1 << 30;
                    try {
                        for (int k = i; k < j; ++k) {
                            min_number = std::min(min_number, route[i].query_single_number(level));
                        }
                    }
                    catch (const Exception &ex) {
                        return ret;
                    }
                    if (min_number < number) {
                        continue;
                    }
                    double cost = route[j].query_single_price(level);
                    if (i) {
                        cost -= route[i].query_single_price(level);
                    }
//std::cout << start_station << " " << finish_station << " " << train_id <<  " " << departure_time.print() << std::endl;
                    ret -> push_back(Tickets(train_id, departure_time, route[i].query_arrival_time(), route[i].query_location(), route[j].query_location(), level, min_number, cost, route[j].query_distance() - route[i].query_distance()));
                }
            }

            /*int p1 = -1,p2 = -1;
			for (int i = 0;(p1 == -1||p2 == -1)&&i < route.size();++i)
			{
				if (route[i].query_location() == start_station) p1 = i;
				if (route[i].query_location() == finish_station) p2 = i;
			}
			if (p1 == -1||p2 == -1||p1 >= p2) throw Exception("查无此票。");
			if (route[p1].query_departure_time() < start_time||route[p1].query_departure_time() > finish_time)
				throw Exception("查无此票。");		
			int mn = 1<<30;
			try
			{
				for (int i = p1;i < p2;++i)
					mn = std::min(mn,route[i].query_single_number(level));
			}
			catch(Exception ex) { throw ex; }
			if (mn < number) { throw Exception("票数不足。");}
			double cost = route[p2].query_single_price(level);
			if (p1) cost -= route[p1].query_single_price(level);
            return Tickets(train_id,departure_time,start_station,finish_station,level,number,cost, );*/
		}

		//所有站名
		shared_ptr < vector <string> > query_station() const
		{
			shared_ptr < vector <string> > ret = new vector <string>;
			for (auto it = route.cbegin();it != route.cend();++it)
				ret->push_back((*it).query_location());
			return ret;
		}

		//买票, 判断区间是否可减以及余额是否够，若true则减少money，且若true则改区间信息
		bool buy_ticket(const string &start_station,const string &finish_station,const string &level,int number,double &money)
		{
			int p1 = -1,p2 = -1;
			for (int i = 0;(p1 == -1||p2 == -1)&&i < route.size();++i)
			{
				if (route[i].query_location() == start_station) p1 = i;
				if (route[i].query_location() == finish_station) p2 = i;
			}
			if (p1 == -1||p2 == -1||p1 >= p2) throw Exception("查无此票。");
			int mn = 1<<30;
			try
			{
				for (int i = p1;i < p2;++i)
					mn = std::min(mn,route[i].query_single_number(level));
			}
			catch (Exception ex) { throw ex; }
			if (mn < number) throw Exception("票数不足。");
			double cost = route[p2].query_single_price(level);
			if (p1) cost -= route[p1].query_single_price(level);
			if (cost*number > money) throw Exception("余额不足。");
			money -= cost*number;
			for (int i = p1;i < p2;++i) route[i].modify_number(level,-number);
			return true;
		}

		//退票, 增加money,改区间信息
		bool refund_ticket(const string &start_station,const string &finish_station,const string &level,int number,double &money)
		{
			int p1 = -1,p2 = -1;
			for (int i = 0;(p1 == -1||p2 == -1)&&i < route.size();++i)
			{
				if (route[i].query_location() == start_station) p1 = i;
				if (route[i].query_location() == finish_station) p2 = i;
			}
			if (p1 == -1||p2 == -1||p1 >= p2) { throw Exception("查无此票。");}
			try
			{
				double cost = route[p2].query_single_price(level);
				if (p1) cost -= route[p1].query_single_price(level);
				money += cost*number;
			}
			catch(Exception ex) { throw ex; }
			for (int i = p1;i < p2;++i) route[i].modify_number(level,number);
			return true;
		}

		//开始发售
		bool start_sale() { on_sale = true; }

		//结束发售
		bool finish_sale() { on_sale = false; }

		//查询是否售票
		bool query_on_sale() const { return on_sale; }

		//时间整体后移一天
		void go_one_day()
		{
			departure_time.go_one_day();
			for (auto it = route.begin();it != route.end();++it)
				(*it).go_one_day();
		}
	};
}

#endif

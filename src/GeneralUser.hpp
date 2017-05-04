#ifndef SJTU_GENERALUSER_HPP
#define SJTU_GENERALUSER_HPP

#include<string>
#include"Exceptions.hpp"
#include"File.hpp"
#include"lib/ptr.hpp"
//#include"Train.hpp"

using std::string;
namespace sjtu
{
	class GeneralUser
	{
	private:
        const string user_id;
        string name,password;
        const bool admin_or_not; //Log my_log;
        //set <Tickets> my_ticket; double money;
        //friend Tickets;
    public:
		enum LogType {All,Buy,Refund,BuyAndRefund,Charge};

		// 构造函数部分
		GeneralUser(const string &_user_id,const string &_name,const string &_password,bool _admin_or_not):
			user_id(_user_id),name(_name),password(_password),admin_or_not(_admin_or_not)
		{
			//if (password.length() < 6||password.length() > 15)
			//	throw PasswordIsNotValid("密码不合法！长度需在6到15之间。\n");
		}

		//默认析构函数
        ~GeneralUser() {}

		//返回用户基本信息，包括 user_id，name
		string query_my_info() const
		{
			string ret = "";
			ret += "User ID: " + user_id + "\n";
			ret += "姓名： " + name + "\n";
            return ret;
		}

		//修改用户名字, 不能长于15
		bool modify_name(const string &_name) 
		{
			//if (_name.length()&&_name.length() > 15) return false;
            name = _name;// my_log.modify_name(Date::current_time(),_name);
			return true;
		}

		//修改密码
		bool modify_password(const string &_password)
		{
			//if (_password != password) { throw WrongPassword("原密码输入错误！\n"); return false; }
			//if (npassword1.length() < 6||npassword1.length() > 15) { throw WrongPassword("密码不合法！长度需在6到15之间。\n"); return false; }
			//if (npassword1 != npassword2) { throw WrongPassword("两次密码输入不一致！\n") return false; }
            password = _password; //my_log.modify_password(Date::current_time,_password);
			return true;
		}
		
		//是否是管理员
		bool is_admin() const { return admin_or_not; }

		//返回用户id
		string get_id() const { return user_id; }

        const string get_name() const {
            return name;
        }
		
		bool check_password(const string &input_password) {
			return password == input_password;
		}
		
		//买票或失败, 管理员不能买票
        bool buy_ticket(shared_ptr <Train> obj,const string &train_id,const string &start_station,const string &finish_station,const string &level,int num)
		{
			if (admin_or_not) { throw NotUser("您是管理员，无法购票。"); return false; }
			double tmoney = money, UnitPrice;
			if (obj->buy_ticket(start_station,finish_station,level,num,money))
			{
				UnitPrice = int(round((tmoney-money)/num));
				Tickets new_tickets = Tickets(train_id,date,start_station,finish_station,level,num,UnitPrice);
				my_log.buy_ticket(Date::current_time(),new_tickets);
				auto it = my_ticket.find(new_tickets);
				if (it == my_ticket.end()) my_ticket.insert(new_tickets);
				else it->number += num;
				return true;
			}
			return false;
		}

		//退票或失败，管理员不能退票
		bool refund_ticket(shared_ptr <Train> obj,const string &train_id,const Date &date,const string &start_station,const string &finish_station,const string &level,int num)
		{
			if (admin_or_not) { throw NotUser("您是管理员，无法退票。"); return false; }
			Tickets new_tickets = Tickets(train_id,date,start_station,finish_station,level,num,0);
			auto it = my_ticket.find(new_tickets);
			if (it != my_ticket.end()&&it->number >= num)
				if (obj->refund_ticket(start_station,finish_station,level,num,money))
				{
					new_tickets.price = it->price;
					my_log.refund_ticket(Date::current_time(),new_tickets);
					if (it->number > num) it -> number -= num;
					else my_ticket.erase(it);
				}
			throw TicketsNotEnough("您的票数不够，无法退票。");
			return false;
		}
		
		//往账户里面充钱
		bool charge(double inc)
		{
			//if (admin_or_not) { throw NotUser("您是管理员，无法充值。\n"); return false; }
			money += inc; my_log.charge(Date::current_time(),inc); return true;
		}

		//查询账户余额
		double query_money() const { return money; }
		
		//返回我买的票
		shared_ptr < vector <Tickets> > query_my_tickets() const
		{
			shared_ptr < vector <Tickets> > ret = new vector <Tickets>;
			for (auto it = my_ticket.begin();it != my_ticket.end();++it)
				(*ret).push_back(*it);
			return ret;
		}

		//返回log(注意权限), 注意返回哪种log
		shared_ptr <Log> query_log(const LogType &_logtype)
		{
			shared_ptr <Log> ret;
			switch (_logtype)
			{
			case All: ret = new Log (my_log); break;
			case Buy: ret = new Log (my_log.buy_log()); break;
			case Refund: ret = new Log (my_log.refund_log()); break;
			case BuyAndRefund: ret = new Log (my_log.buy_refund_log())break;
			default: ret = new Log (my_log.charge_log()); break;
			}
			return ret;
		}

    };
}

#endif

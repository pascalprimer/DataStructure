#ifndef SJTU_TICKET_HPP
#define SJTU_TICKET_HPP

#include<iostream>
#include<string>
#include"lib/ptr.hpp"
#include"date.hpp"

using std::string;

namespace sjtu {
	
class ticket{
	private:
		string train_id;
		date departure_time;
		string start_station;
		string finish_station;
		string level;
		int number;
		double price;
		
	public:
		ticket (string ti , date d , string ss , string fs , string l , int n , double p) {
			train_id = ti;
			departure_time = d;
			start_station = ss;
			finish_station = fs;
			level = l;
			number = n;
			price = p;
		}
		ticket (const ticket &obj) {
			train_id = obj.train_id;
			departure_time = obj.departure_time;
			start_station = obj.start_station;
			finish_station = obj.finish_station;
			level = obj.level;
			number = obj.number;
			price = obj.price;
		}
		ticket &operator = (const ticket &obj) {
			ticket tmp;
			tmp.train_id = obj.train_id;
			tmp.departure_time = obj.departure_time;
			tmp.start_station = obj.start_station;
			tmp.finish_station = obj.finish_station;
			tmp.level = obj.level;
			tmp.number = obj.number;
			tmp.price = obj.price;
			
			return tmp;
		}
		bool operator == (const ticket &obj) {
			if (train_id == obj.train_id && departure_time == obj.departure_time && strat_station == obj.start_station && finish_station == obj.finish_station && level == obj.level) {
				return true;
			}
			else return false;
		}
		bool operator != (const ticket &obj) {
			if (train_id == obj.train_id && departure_time == obj.departure_time && strat_station == obj.start_station && finish_station == obj.finish_station && level == obj.level) {
				return false;
			}
			else return true;
		}
		bool operator < (const ticket &obj) {
			if (*this -> train_id < obj.train_id) {
				return true;
			}
			else if (*this -> train_id == obj.train_id) {
				if (*this -> departure_time < obj.departure_time) {
					return true;
				}
				else if (*this -> departure_time == obj.departure_time) {
					if (*this -> start_station < obj.start_station) {
						return true;
					}
					else if (*this -> start_station == obj.start_station) {
						if (*this -> finish_station < obj.finish_station) {
							return true;
						}
						else if (*this -> finish_station == obj.finish_station) {
							if (*this -> level < obj.level) {
								return true;
							}
							else {
								return false;
							}
						}
					}	
				}
			}
			return false;
		}
		const string query_number() {
			return number;
		} 
		const date query_date() {
			return departure_time;
		}
		const string query_level() {
			return level;
		}
		const string query_start_station() {
			return start_station;
		}
		const string query_finish_station() {
			return finish_station;
		}
		bool modify_number (int delta) {
			if (*this -> number + delta >= 0) {
				*this -> number += delta;
				return true;
			}
			else return false;
		}
};
}

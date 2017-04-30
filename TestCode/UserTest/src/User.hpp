//初始化now_id(long long sjtu::User::now_id = 0)

#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "File.hpp"
#include "Exception.hpp"
#include "GeneralUser.hpp"
#include "Admin.hpp"
#include "lib/map.hpp"
#include "lib/pair.hpp"
#include "ptr.hpp"

using std::string;
namespace sjtu {
	
	class User {
		long long now_id;
		shared_ptr<GeneralUser> now;
		map<string, GeneralUser> user;
		map<pair<string, Date>, Train> train;
		string official_idenfitying_code;
		
		//下一个合法user_id
		long long get_next_user_id() {
			while (user.find(to_string(now_id)) != user.end()) {
				now_id++;
			}
			return now_id;
		}
		
	public:
		//construction
		User() {
			now_id = 0;
			now = nullptr;
			user.clear();
			train.clear();
			official_identifying_code = "";
		}
		
		//deconstruction
		~User() {}
		
		//普通注册
		string regigster(const string &user_name, const string &password1, const string &password2) {
			if (password1 != password2) {
				throw InconsistentPassword();
			}
			LL user_id = get_next_user_id();
			now[user_id] = GeneralUser(user_id, user_name, password1, 0);
			login(user_id, password1);
			return user_id;
		}
		
		//admin注册
		string admin_regigster(const string &user_name, const string &password1, const string &password2, const string &identifying_code) {
			if (password1 != password2) {
				throw InconsistentPassword();
			}
			if (identifying_code != official_identifying_code) {
				throw WrongIdentifyingCode();
			}
			LL user_id = get_next_user_id();
			now[user_id] = GeneralUser(user_id, user_name, password1, 1);
			login(user_id, password1);
			return user_id;
		}
		
		//login
		bool login(const string &user_id, const string &password) {
			if (!now) {
				throw AlreadyLogin();
			}
			map<string, GeneralUser>::iterator it = M.find(user_id);
			if (it == M.end()) {
				throw UserNotExist();
			}
			try {
				it -> login(password);
			}
			catch(const WrongPassword &wrong_password) {
				throw wrong_password;
			}
			now = it -> second;
			return true;
		}
		
		//logout
		bool login(const string &user_id, const string &password) {
			if (now == nullptr) {
				throw AlreadyLogout();
			}
			now = nullptr;
			return true;
		}
		
		//改验证码
		void set_identifying_code(const string &original_code, const string &new_code) {
			if (original_code != official_identifying_code) {
				throw WrongIdentifyingCode();
			}
			official_identifying_code = new_code;
		}
		
		
	};

}

#endif



























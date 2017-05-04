#include <string>
#include <iostream>
//#include "Exceptions.hpp"
#include <bits/stdc++.h>
#include "User.hpp"
using namespace std;
using namespace sjtu;

int main() {
	/*long long a = 123;
	string str = to_string(a);
	InconsistentPassword aa(string("123123123"));*/
	User user;
	std::cout << user.create_user("cyy", "pascalprimer", "pascalprimer") << std::endl;
    user.login("0", "pascalprimer");
    user.logout();
}

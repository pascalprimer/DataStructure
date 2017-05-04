#include <string>
#include <iostream>
//#include "Exceptions.hpp"
#include <bits/stdc++.h>
using namespace std;
//using namespace sjtu;

int main() {
	/*long long a = 123;
	string str = to_string(a);
	InconsistentPassword aa(string("123123123"));*/
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	string str;
	char s[10000];
	while (cin.getline(s, 100)) {
		cout << s << endl;
		if (s[0] == 'c') {
			cout << "public:" << endl;
			str = "";
			for (int i = 6; i < 100 && s[i] != ':'; ++i) {
				str = str + s[i];
			}
			cout << "	" << str << "(const std::string &rhs): Exception(rhs) {}" << endl;
		}
	}
}

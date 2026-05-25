#pragma once

#include <string>

using namespace std;

class User {
protected:
	string username;
	string password;

public:
	User(string u, string p);

	bool login(string u, string p);
	void logout();

	string getUsername();
	string getPassword();
};

#ifndef _ADMIN_H
#define _ADMIN_H
#include <string>
using namespace std;

class Admin {

private:
	string username;
	string password;

public:
	Admin();
	bool login();
	void dashboard(const string& history);
};
#endif //_ADMIN_H

#ifndef _CUSTOMER_H
#define _CUSTOMER_H
#include <string>
using namespace std;

class Customer {

private:
	string name;
	string email;
	string phone;
	int customerID;

public:
	Customer();
	void setName(string n);
	void setCustomerID(int ID);
	void setEmail(string e);
	void setPhone(string p);
	string getName();
	int getCustomerID();
	string getEmail();
	string getPhone();
	
	void registerCustomer();

};
#endif //_CUSTOMER_H

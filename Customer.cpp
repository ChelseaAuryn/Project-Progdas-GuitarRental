#include "Customer.h"
#include <iostream>
using namespace std;


Customer::Customer(){
	name = "";
	email = "";
	phone = "";
	customerID= 0;
}

void Customer::setName(string n){
	name = n;
}
void Customer::setCustomerID(int ID){
	customerID = 	ID;
}
void Customer::setEmail(string e){
	email = e;
}
void Customer::setPhone(string p){
	phone = p;
}
string Customer::getName(){
	return  name;
}
int Customer::getCustomerID(){
	return customerID;
}
string Customer::getEmail(){
	return  email;
}
string Customer::getPhone(){
	return  phone;
}

void Customer::registerCustomer(){
	cin.ignore();
	cout << "\n=== CUSTOMER REGISTRATION ===\n";
	string n, e, p;
	int ID;

	cout << "Name 			: ";
	getline (cin, n);
	cout << "Customer ID	: ";
	cin >> ID;
	cin.ignore();
	cout << "Email			: ";
	getline (cin, e);
	cout << "Phone Number	: ";
	getline(cin, p);

	setName (n);
	setCustomerID (ID);
	setEmail (e);
	setPhone (p);

	cout << "\nRegistration successful! Welcome, " <<getName()<< "!\n";
}
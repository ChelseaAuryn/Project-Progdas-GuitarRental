#ifndef _GUITARRENTALSYSTEM_H
#define _GUITARRENTALSYSTEM_H
#include "Customer.h"
#include "Admin.h"
#include "Rental.h"

class GuitarRentalSystem{
	private:
	Customer customer;
	Admin admin;
	Rental rental;

	void showWelcome();
	void customerMenu();
	void adminMenu();

public:
	GuitarRentalSystem();
	void run();

};
#endif // _GUITARRENTALSYSTEM_H

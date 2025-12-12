#include "Admin.h"
#include <iostream>
using namespace std;

Admin::Admin() {
    username = "admin";
    password = "12345";
}

bool Admin::login() {
    string u, p;
    cout << "\n=== ADMIN LOGIN ===\n";
    cout << "Username : ";
    cin >> u;
    cout << "Password : ";
    cin >> p;

    if (u == username && p == password) {
        cout << "\nLogin successful! Welcome Admin.\n";
        return true;
    }
    cout << "\nLogin failed!\n";
    return false;
}

void Admin::dashboard (const string& history){
	int pilih;
	do {
		cout << "\n=== ADMIN DASHBOARD ===\n"
		<< "1. View Rental Record\n"
		<< "2. Logout\n"
		<< "Choose :";
		cin >> pilih;

		if (pilih == 1) {
			cout << "\n--- RENTAL RECORD ---\n";
			if (history.empty()) 
                cout << "No rental history\n";
            else 
                cout << history << endl;
		}
	} while (pilih != 2);
}
#include "GuitarRentalSystem.h"
#include <iostream>
using namespace std;

GuitarRentalSystem::GuitarRentalSystem() {
    // isi kosong juga tidak masalah
}

void GuitarRentalSystem::showWelcome() {
    cout << "\n=== WELCOME TO GUITAR RENT ===\n";
}

void GuitarRentalSystem::customerMenu() {
    customer.registerCustomer();
    int menu;
    do {
        cout << "\n--- MAIN MENU ---\n"
             << "1. Start Rental\n"
             << "2. Return Guitar\n"
             << "3. History\n"
             << "4. Exit\n"
             << "Choose : ";
        cin >> menu; 
        cin.ignore();

        if(menu == 1) 
            rental.startRental();
        else if(menu == 2) 
            rental.returnGuitar();
        else if(menu == 3) 
            rental.showHistory();
        else if(menu == 4) 
            cout << "\nThank you, " << customer.getName() << "\n";
    } while(menu != 4);
}

void GuitarRentalSystem::adminMenu() {
    if(admin.login()) {
        admin.dashboard(rental.getHistory());
    }
}

void GuitarRentalSystem::run() {
    int pilih;
    showWelcome();

    do {
        cout << "\nLOGIN AS:\n"
             << "1. Customer\n"
             << "2. Admin\n"
             << "3. Exit\n"
             << "Choose : ";
        cin >> pilih;

        if(pilih == 1) {
            customerMenu();
        }
        else if(pilih == 2) {
            adminMenu();
        }
    } while(pilih != 3);

    cout << "\nThank you for using Guitar Rental System!\n";
}
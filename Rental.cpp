#include "Rental.h"
#include <iostream>
using namespace std;

Rental::Rental() {
    active = false;
    duration = 0;
    rentalDate = "";
    history = "";
}

void Rental::setActive(bool a) { 
    active = a; 
}

void Rental::setDuration(int d) { 
    duration = d; 
}

void Rental::setRentalDate(string r) { 
    rentalDate = r; 
}

void Rental::setHistory(string h) { 
    history = h; 
}

bool Rental::isActive() const { 
    return active; 
}

int Rental::getDuration() const { 
    return duration; 
}

string Rental::getRentalDate() const { 
    return rentalDate; 
}

string Rental::getHistory() const { 
    return history; 
}

Guitar& Rental::getGuitar() { 
    return guitar; 
}

void Rental::chooseGuitar() {
    int c;
    cout << "\n--- CHOOSE GUITAR ---\n"
         << "1. Yamaha F310 (75.000/day)\n"
         << "2. Fender CD-60 (95.000/day)\n"
         << "3. Gibson G-45 (150.000/day)\n"
         << "4. Squier Stratocaster (80.000/day)\n"
         << "5. Gibson Les Paul Studio (220.000/day)\n"
         << "Option: ";
    cin >> c; 
    cin.ignore();

    if(c == 1) 
        guitar.setGuitar("Yamaha F310", 75000);
    else if(c == 2) 
        guitar.setGuitar("Fender CD-60", 95000);
    else if(c == 3) 
        guitar.setGuitar("Gibson G-45", 150000);
    else if(c == 4) 
        guitar.setGuitar("Squier Stratocaster", 80000);
    else if(c == 5) 
        guitar.setGuitar("Gibson Les Paul Studio", 220000);
    else { 
        cout << "Invalid choice!\n"; 
        return; 
    }

    cout << "\nYou choose: " << guitar.getModel() << endl;
}

void Rental::startRental() {
    if(active) { 
        cout << "\nStill active rental!\n"; 
        return; 
    }

    chooseGuitar();
    cout << "\nRent Date (dd/mm/yyyy): ";
    getline(cin, rentalDate);
    cout << "Rent duration (days): ";
    cin >> duration; 
    cin.ignore();

    setActive(true);
    int total = pay.process(duration, guitar.getPrice());

    setHistory("Model: " + guitar.getModel() + " | Date: " + rentalDate +
              " | Duration: " + to_string(duration) +
              " days | Total: Rp " + to_string(total));

    cout << "\nRental successfully created!\n";
}

void Rental::showHistory() {
    if(history.empty()) 
        cout << "\nNo rental history\n";
    else 
        cout << "\n--- RENTAL HISTORY ---\n" << history << endl;
}

void Rental::returnGuitar() {
    if(!active) { 
        cout << "\nNo active rental!\n"; 
        return; 
    }
    setActive(false);
    cout << "\nReturn completed! Thank you.\n";
}
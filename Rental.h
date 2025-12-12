#ifndef _RENTAL_H
#define _RENTAL_H

#include "Guitar.h"
#include "Payment.h"
#include <string>
using namespace std;

class Rental {
private:
    bool active;
    int duration;
    string rentalDate;
    string history;
    Guitar guitar;
    Payment pay;
    
public:
    Rental();
    
    // SETTER
    void setActive(bool a);
    void setDuration(int d);
    void setRentalDate(string r);
    void setHistory(string h);

    // GETTER
    bool isActive() const;
    int getDuration() const;
    string getRentalDate() const;
    string getHistory() const;
    Guitar& getGuitar();

    // Methods
    void chooseGuitar();
    void startRental();
    void showHistory();
    void returnGuitar();
};

#endif //_RENTAL_H
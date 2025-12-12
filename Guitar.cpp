#include "Guitar.h"
#include <string>
using namespace std;

Guitar::Guitar() {
    model = "";
    pricePerDay = 0;
}

void Guitar::setGuitar(string m, int p) {
    model = m;
    pricePerDay = p;
}

string Guitar::getModel()const{
    return model;
}

int Guitar::getPrice()const{
    return pricePerDay;
}


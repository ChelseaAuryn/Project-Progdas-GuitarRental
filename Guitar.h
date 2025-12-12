#ifndef _GUITAR_H
#define _GUITAR_H
#include <string>
using namespace std;

class Guitar {
private:
	string model;
	int pricePerDay;

public:
	Guitar();
	void setGuitar(string m, int p);
	string getModel()const;
	int getPrice()const;
};
#endif //_GUITAR_H

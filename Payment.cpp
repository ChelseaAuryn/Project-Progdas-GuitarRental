#include "Payment.h"
#include <iostream>
using namespace std;

Payment::Payment(){}

int Payment::process(int duration, int price){
	int total = duration * price;
	cout << "\n===== PAYMENT DETAILS =====\n"
         << "Duration       : " << duration << " day(s)\n"
         << "Total Payment  : Rp " << total << "\n"
         << "Please pay at the cashier (CASH/QRIS)\n";
	return total;
}
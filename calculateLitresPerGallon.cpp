// A simple program to accept how many litres of fuel used and
// how many km the car travelled. Then calculatet the num of 
// km per gallons the car travelled.

#include "stdafx.h"
#include <iostream>
using namespace std;

const double LPG = 0.264179; //litres per gallons

//Calculate km per gallons
void calKiloPerGal(double, double);

int main()
{
	double litres, km;
	cout << "How many litres of petrols consumed by your cars? ";
	cin >> litres;
	cout << "\nHow many kilometres travelled? ";
	cin >> km;
	calKiloPerGal(litres, km);
    return 0;
}

void calKiloPerGal(double litres, double km) {
	cout << "The number of kilometres per gallon is: ";
	cout << km / (litres * LPG) << endl;
}

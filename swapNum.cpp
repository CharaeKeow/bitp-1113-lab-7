// A simple program to swap two numbers passed into a function.
// The original pairs and the swapped pairs are displayed.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void swap(float, float);

int main()
{
	float a, b;
	cout << "Enter two values: " << endl;
	cin >> a >> b;
	cout << "The original pair is: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b);
    return 0;
}

void swap(float a, float b) {
	cout << "After swapped: " << endl;
	cout << "a = " << b << ", b = " << a << endl;
}

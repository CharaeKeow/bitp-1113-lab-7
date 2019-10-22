// A simple program to swap two numbers passed into a function using pass by reference.
// Now I see that with pass by ref, we can retain the value altered by the function.
// Like for this case, the value of the swapped pair are retained after the function call.

#include <iostream>
#include <string>
using namespace std;

void swap(float &, float &);

int main()
{
	float a, b;
	cout << "Enter two values: " << endl;
	cin >> a >> b;
	cout << "The original pair is: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "The original pair is: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}

void swap(float &a, float &b) {
	float temp = a; //temp to prevent overriding
	a = b;
	b = temp; 
	cout << "The value after being swapped is: " << endl;
	cout << "a = " << a;
	cout << "\nb = " << b << endl;
}

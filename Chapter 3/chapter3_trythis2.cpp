#include "../../../../std_lib_facilities.h"

// simple program to exercise our ability to use different operators on data types.

int main()
{
	// cout << "Please enter in a floating point value:\n"; // output to the console with a newline.
	
	// double n; // defining a variable (an object essencially)
	// cin >> n; // reading in that variable
/*
	cout << "n== " << n;
	cout << "\nn + 1 = " << n + 1;
	cout << "\nthree times n = " << n * 3;
	cout << "\ndivided twice n = " << n / 2;
	cout << "\nn twice = " << n + n;
	cout << "\nn squared " << n * n;
*/

	// cout << "\nsquare root of n = " << sqrt(n) << "\n"; // name for newline ("end of line") in output.


	cout << "Please enter in a integer number:\n";

	int x; // defining a variable.
	cin >> x; // reading in that variable.

	cout << "x== " << x;
	cout << "\nx plus one = " << x + 1;
	cout << "\nx times ten = " << x * 10;
	cout << "\nx divided by three = " << x / 3;
	cout << "\nx modulus four = " << x % 4;
	cout << "\nx squared = " << x * x;
	cout << "\nsquare root of x = " << sqrt(x) << "\n"; // name for newline ("end of line") in output. 

	keep_window_open();
	return 0;
}
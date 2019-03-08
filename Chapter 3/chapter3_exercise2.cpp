#include "../../../../std_lib_facilities.h"

// written by sshuy
// date 08/03/2019

// a program that converts the users input from miles to kilometers
// 1.609 kilometers to a mile, so use multiplication.

int main()
{
	cout << "Input mile value to convert to kilometers: "; // prompt user for input
	double miles = 0; // define variable miles
	cin >> miles; // read in miles

	double kilometers = 0; // define variable kilometers
	kilometers = miles * 1.609; // multiply the users input by 1.609 and assign the value to kilometers

	cout << miles << " miles converted to kilometers is: " << kilometers << "\n";

	keep_window_open();
	return 0;
}
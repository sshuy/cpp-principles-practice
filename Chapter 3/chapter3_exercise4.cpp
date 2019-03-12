#include "../../../../std_lib_facilities.h"

// written by sshuy
// date 10/03/2019

// a program that takes in two integer values and produces the smaller, larger, sum, difference, product and ratios of the values inputted, then reports them to the user.
// edited the program to take floating point numbers to solve the issue with integer division.


int main()
{
	cout << "Please enter in two floating-point values: ";

	double val1 = 0;
	double val2 = 0;
	double smallest_val = 0;
	double largest_val = 0;

	cin >> val1 >> val2;

	if (val1 < val2) // if val1 is less than val2
		smallest_val = val1; // assigns value one to smallest value variable

	if (val1 > val2) // if val1 is greater than val2
		smallest_val = val2; // assigns value two to smallest value variable

	if (val1 < val2) // if val1 is less than val2
		largest_val = val2; //assign value two to the largest value variable

	if (val1 > val2) // if val1 is greater than val2
		largest_val = val1; //assign value one to the largest value variable

	cout << "\nsum = " << val1 + val2 << '\n';
	cout << "difference = " << val1 - val2 << '\n';
	cout << "product = " << val1 * val2 << '\n';
	cout << "smallest = " << smallest_val << '\n';
	cout << "largest = " << largest_val << '\n';
	cout << "ratio = " << val1 / val2 << '\n'; // when the variables are stored as a double. it allows floating-point based division instead of integer. allows for more accurate ratio representation.

	keep_window_open();
	return 0;
}
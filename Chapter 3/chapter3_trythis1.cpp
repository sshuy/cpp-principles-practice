#include "../../../../std_lib_facilities.h"

// This program will read and write out input.

// Modified the example in the book PG: 65. Modify it to write out the age in months. Take input in as years abd multiply using the '*' operator by 12.

int main()
{
	cout << "Please enter in your first name and age:\n"; // output string literal in double quotes.
	string first_name = "???"; // String variable '???' means we don't know the name.
	double age = 0; // Double variable '0' means we don't know the age.

	cin >> first_name >> age; // Reading in the a string 'first_name' variable and an integer 'age' variable.

	cout << "Hello, " << first_name << " you are " << age << " years old or " << age * 12 << " months old.\n"; // Output the string and the age and the age multiplied by 12.
	
	keep_window_open();
	return 0;
}
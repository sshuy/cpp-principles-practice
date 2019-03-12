#include "../../../../std_lib_facilities.h"

// written by sshuy
// date 11/03/2019


// a program that prompts the user to enter three integer values and outputs them in numerical sequence separated by commas

// users inputs "5, 1, 9"
// the program should then output "1, 5, 9" if equals are entered then output as follows "4, 4, 5"

// tests

// 1 5 9
// 1 9 5 issue
// 5 1 9 issue
// 5 9 1 issue
// 9 5 1 issue
// 9 1 5 works


int main()
{

	// prompt input from the user
	cout << "Enter in three integer values: ";

	int val1 = 0;
	int val2 = 0;
	int val3 = 0;


	keep_window_open();
	return 0;

}




// attempt one

/*
	if (value_two < value_one) // 10, 4, 6
	{
		move_value = value_one; // 10 is now in move value
		value_one = value_two; // value one now has 4
	}

	// 4, 4, 6

	if(move_value > value_three)
	{
		value_two = value_three; // 10
		value_three = move_value;
	}


	// 4, 4, 10

	*/

// attempt two

/*
	if (value_one >= value_two)
	{
		move_val = value_one;
		value_one = value_two;
	}

	if (value_one <= value_two) // 5, 7
	{
		move_val = value_two; // 7
		value_two = value_one; // 5
	}

	if (value_one >= value_three)
	{
		move_val = value_one;
		value_three = value_one;
	}

	if(value_one <= value_three)
	{
		move_val = value_three;
		value_one = value_three;
	}

	if (value_two >= value_three)
	{
		move_val = value_three;
		value_three = value_two;
	}

	if (value_two <= value_three)
	{
		move_val = value_two;
		value_two = value_three;
	}
	*/



// attempting something else direct copy from the book

/*

// prompt input from the user
	cout << "Enter two words: ";

	string first = " ";
	string last = " ";

	cin >> first >> last;

	if (first == last)
		cout << "\nsame name twice\n";

	if (first < last)
		cout << first << " is alphabetically before " << last << '\n';

	if (first > last)
		cout << first << " is alphabetically after " << last << '\n';

	keep_window_open();
	return 0;

*/
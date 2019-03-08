#include "../../../../std_lib_facilities.h"

// a repeated word detection program to work on assignment and initialization.

// words to input (She, she, laughed, He, He, He, because, what, he, did, did, not, look, very, very, good, good.)

// based off the input above we get 5 repeated words (He, He, did, very, good)

// repeated words are an exact repeat of what was previously written. capitilization will stop a word from being a repeated word.

// in most scanarios "She, she" is a repeated word, although here due to case-sensitivity with the characters "S & s". the program doesn't see it as a repeated word.

int main()
{
	int number_of_words = 0;
	string previous = " ";
	string current;
	while (cin >> current)
	{
		++number_of_words; // increase word count
		if (previous == current)
			cout << "word number: " << number_of_words << " repeated word: " << current << "\n";
		previous = current; // assignment previous gets the value of current.
	}
}
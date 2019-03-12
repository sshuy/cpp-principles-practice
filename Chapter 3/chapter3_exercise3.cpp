#include "../../../../std_lib_facilities.h"

// written by sshuy
// date 08/03/2019

// a program that doesn't do anything. here we declare variables with both legal and illegal names to see how the compiler reacts to each name. the program is supposed to not make sense.

int main()
{
	int range_sum = 10; // OK

	int double = 0; // (12): error C2632: 'int' followed by 'double' is illegal										(12): error C2513: 'int': no variable declared before '='

	double _foo = 321.5; // (14): warning: not an illegal name, but system calls and machine code utilize underscores at the beginning of the variable name. can cause problems in large code base projects.

	bool volume_max = 5; // (16): warning C4305 : 'initializing' : truncation from 'int' to 'bool'

	bool volume_min = "hii"; // doesn't give any warning or error. i assume its illegal but not sure.

	bool volume_off = true; // OK

	char multiple_symbols = '300'; // (22): warning C4305: 'initializing': truncation from 'int' to 'char'			(22): warning C4309: 'initializing': truncation of constant value

	string store_numbers = 681; // (24): error C2440: 'initializing': cannot convert from 'int' to 'std::basic_string<char,std::char_traits<char>,std::allocator<char>>' (24): note: No constructor could take the source type, or constructor overload resolution was ambiguous

	int store_titles = "Tesco"; // (26): error C2440: 'initializing': cannot convert from 'const char [6]' to 'int'					(26): note: There is no context in which this conversion is possible <-- FUNNY

	double bool = string; // (28): error C2632: 'double' followed by 'bool' is illegal						(28): error C2513: 'double': no variable declared before '='
}
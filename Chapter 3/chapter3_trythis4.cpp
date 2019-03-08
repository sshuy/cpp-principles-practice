#include "../../../../std_lib_facilities.h"

// LINK : fatal error LNK1561: entry point must be defined. this only appears when all compiler errors have been resolved, as this is a linking error. linking happens when linking the .obj files together.

int main() // due to main being spelt incorrectly (Capital M). it is unable to link the .obj, which from are standard library include, causing this error.
{
	string s = "Goodbye, cruel world! "; // (7): error C2065: 'STRING': undeclared identifier
	cout << s << "\n"; // (8): error C2065: 's': undeclared identifier. this error is linked to the errors on line 5, because the 's' variable hasn't been initialised probably, as STRING is written wrong.

	keep_window_open();
	return 0;
}


// unfixed below


/*
int Main()
{
	STRING s = "Goodbye, cruel world!";
	cOut << S << '\n';

	keep_window_open();
	return 0;
}
*/
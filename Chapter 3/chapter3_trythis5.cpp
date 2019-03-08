#include "../../../../std_lib_facilities.h"

int main()
{
	double d = 0;

	while (cin >> d)
	{
		int i = d;
		char c = { i };
		int i2 = c;

		cout << "d variable = " << d << "\ni variable = " << i << "\ni2 variable = " << i2 << "\nchar variable = " << c << "\n";
	}
}
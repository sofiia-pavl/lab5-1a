#include <iostream>
#include <exception>;
#include <stdexcept>;
#include "Combination.h"

int main()
{
	cout << "Enter two numbers(first<second)" << endl << endl;
	Combination c;
	bool result;

	do
	{
		try
		{
			result = true;
			cin >> c;
			cout << "Combination of numbers:" << endl << endl;
			cout << "Combination(n,k) = " << c.combination() << endl;
		}
		catch (const char* str)
		{
			result = false;
			cerr << str << endl;
		}
		catch (bad_exception& e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (invalid_argument i)
		{
			result = false;
			cerr << i.what() << endl;
		}
	} while (!result);

	return 0;
}

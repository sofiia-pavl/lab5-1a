#pragma once
#include <iostream>
#include <string>

using namespace std;

class BadExeption
{
private:
	string what;
public:
	BadExeption(string w)
		:what(w)
	{}
	string What()
	{
		return what;
	}
};

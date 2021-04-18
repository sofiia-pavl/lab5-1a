#pragma once
#include <iostream>
#include <string>
#include"BadExeption.h"

using namespace std;

class Combination
{
private:
	unsigned int first;
	unsigned int second;
public:
	Combination();
	Combination(unsigned int, unsigned int);
	Combination(const Combination&);
	~Combination();

	void SetFirst(unsigned int);
	void SetSecond(unsigned int);
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }

	operator string() const;

	friend ostream& operator << (ostream&, const Combination&);
	friend istream& operator >> (istream&, Combination&);
	Combination& operator ++();
	Combination& operator --();
	Combination operator ++(int);
	Combination operator --(int);

	double combination();
};

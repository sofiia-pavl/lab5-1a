#include "Combination.h"
#include <sstream>

Combination::Combination()
{
	first = 0;
	second = 0;
}

Combination::Combination(unsigned int f = 0, unsigned int s = 0) throw(BadExeption, invalid_argument)
{
	if (first > second)
		throw BadExeption("Error (first > second)");
	if (first == 0 || second == 0)
		throw invalid_argument("Error (one of arguments == 0)");
	first = f;
	second = s;
}

Combination::Combination(const Combination& f)
{
	first = f.first;
	second = f.second;
}

Combination::~Combination()
{}

void Combination::SetFirst(unsigned int f)
{
	first = f;
}

void Combination::SetSecond(unsigned int s)
{
	second = s;
}

Combination::operator string()const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Combination& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Combination& r)throw (const char*, bad_exception)
{
	cout << " First = "; in >> r.first;
	cout << " Second = "; in >> r.second;
	cout << endl;
	if (r.first > r.second)
		throw "Error(first>second)";
	if (r.first == 0 || r.second == 0)
		throw bad_exception();
	return in;
}

Combination& Combination::operator ++()
{
	first++;
	return *this;
}

Combination& Combination::operator --()
{
	first--;
	return *this;
}

Combination Combination::operator ++(int)
{
	Combination t(*this);
	second++;
	return t;
}

Combination Combination::operator --(int)
{
	Combination t(*this);
	second--;
	return t;
}

double Combination::combination()
{
	int a, b, t, d;
	double c;
	a = 1;
	for (int i = 1; i <= second; i++)
	{
		a *= i;
	}
	b = second - first;
	t = 1;
	for (int i = 1; i <= b; i++)
	{
		t *= i;
	}
	d = 1;
	for (int i = 1; i <= first; i++)
	{
		d *= i;
	}
	c = a / (t * d);
	return c;
}

#include <iostream>
#include <math.h>


using namespace std;
int main()
{
	double a, b, c, d, p, s;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Area of a triangle = " << s;

	if (s > 10)
	{
		cout << "\nHello world!";
		return 0;
	}
	else
	{
		cout << "\nBAD IT'S NOT 10";
		return 0;
	}
}


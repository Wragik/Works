#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x,y;
	setlocale(LC_ALL, "rus");

	cout << "Введите x ";
	cin >> x;
	cout << "Введите y ";
	cin >> y;

		
	if (x > y)
	{
		double f;
		f = x;
		x = x * y * 2;
		y = (f + y) / 2;
		cout << "X равен " << x << "\n";
		cout << "Y равен " << y;
	}
	else 
	{
		if(x < y)
		{		
			double f;
			f = x;
			x = (x + y) / 2;
			y =  f * y * 2;
			cout << "X равен " << x << "\n";
			cout << "Y равен " << y;
		}
		else
		{
			cout << "Error, числа равны";
			
			
			
		}
	}
}


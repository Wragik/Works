

#include <iostream>
using namespace std;
int main()
{
	long int f;
	int n, i;
	setlocale(LC_ALL, "rus");
	cout << "Введите расчетный факториал: ";
	cin >> n;
	f = i = 1;
	while (i <= n)
	{
		f = f * i++;
	
	}
	cout << "\n" << n << "!= " << f;

}

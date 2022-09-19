// massiv practic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a[10], i,c = 0, b[5];
	for (i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (i%2==0 && a[i] > 0)
		{
			b[c] = a[i];
			c++;

		}
		
	}
	
	for (i = 0; i < c; i++)
	{
		cout << "b[" << i << "]=" << b[i] << " ";
	}







}


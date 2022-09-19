// post while.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double a, s, v = 0;
	int n,i = 1;
	setlocale(LC_ALL, "rus");
	cout << ("Введите a ");
	cin >> a;
	cout << ("Введите n ");
	cin >> n;
	
	do
	{
		s = 1 / (2 * a * i);
		v = v + s;
		i++;
		
		
	} 	while (i <= n);
	cout << "Cумма равна " <<  v;

}

 
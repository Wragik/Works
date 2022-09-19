// Factorial parametr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
	double eps,s;
	int n;
	setlocale(LC_ALL, "rus");
	cout << "Введите точность ";
	cin >> eps;
	for (n = 1, s = 0; 1. / n > eps && n < INT_MAX; s+=1.0/n++);


	cout << "Вывести " << s; 

	
}


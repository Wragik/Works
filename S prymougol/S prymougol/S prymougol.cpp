// S prymougol.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, s1, s2;
	setlocale(LC_ALL, "rus");
	
	cout << "Введите стороны первого прямоугольника \n";
	cin >> a; cin >> b;

	cout << "Введите стороны второго прямоугольника \n";
	cin >> c; cin >> d;

	s1 = a * b;
	s2 = c * d;

	if (s1 > s2)
	{
		cout << "Наибольшая площадь у первого";
	}
	else
	{
		if (s1 < s2)
		{
			cout << "Наибольшая площадь у второго";
		}
		else
		{
			cout << "Площади прямоугольников одинаковы";
		}
	}


}

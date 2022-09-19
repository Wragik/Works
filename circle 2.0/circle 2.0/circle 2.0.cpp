#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); // поддержка кириллицы 
	double  c; // переменные с плавающей точкой
	cout << "Данная программа, предназначена для вычисления площади круга по длине окружности \n" "Введите длину окружности ";
	cin >> c; 
	
	c = c / (2 * 3.14); //вычисление радиуса по длине окружности

	c = c * c * 3.14; //вычисление площади круга

	if (!c)		// Проверка типов данных
	{
		
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error, введите число!\n";
		main();
	}
	else {
		cout << "Площадь круга равна " << c; // вывод площади круга
	}
	
}
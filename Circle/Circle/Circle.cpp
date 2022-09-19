

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double c;
	cout << "Данная программа, предназначена для вычисления площади круга по длине окружности\n";

	cout << "Введите длину окружности ";
	cin >> c;

	c = c / (2 * 3.14); //вычисление радиуса по длине окружности
	
	c = c * c * 3.14; //вычисление площади круга
	

	cout << "Площадь круга равна " << c;

}




// Massiv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string students[3] =
	{
		"Елисеев", "Елисеев2", "Елисеев22"
	};
	for (int i = 0; i < 3; i++)
	{
		cout << students[i]<< " ";
	}
	
	return 0;
}


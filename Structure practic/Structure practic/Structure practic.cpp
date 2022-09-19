#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int N, i;
struct student
{
	string fami;
	string group;
	string para;
	string date;
	int ball;
}; student st;
void Input(student* st)
{
	for (i = 0; i < N; ++i)
	{
		cin.get();
		cout << "Введите ФИО: ";
		getline(cin, st[i].fami);
		cout << "Введите номер группы:";
		cin >> st[i].group;
		cout << "наименование дисциплины ";
		cin >> st[i].para;
		cout << "дата сдачи ";
		cin >> st[i].date;
		cout << "оценка ";
		cin >> st[i].ball;


	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int z;
	cout << "Количество студентов:";
	cin >> N;
	student* st = new student[N];
	Input(st);
	cout << "\n";
	for (i = 0; i < N; ++i)
	{
		cout << "Фамилия: " << st[i].fami << "\nГруппа: " << st[i].group
			<< "\nнаименование дисциплины: " << st[i].para
			<< "\nдата сдачи: " << st[i].date << "\nоценка: " << st[i].ball;
		cout << "\n" << "\n";
	}
	cout << "студенов с какими оценками вывести";
	cin >> z;
	for (i = 0; i < N; i++)
	{
		cout << "\n";
		if (st[i].ball == z)
		{

			cout << "ФИО: " << st[i].fami << "\nГруппа: " << st[i].group
				<< "\nнаименование дисциплины: " << st[i].para
				<< "\nдата сдачи: " << st[i].date << "\nоценка: " << st[i].ball << "\n";
		}
	}
	
	return 0;
}

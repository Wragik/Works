// Simvol strok.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cctype>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    char s[50];
    int p = 0;
    cout << "Введите строку ";
    gets_s(s);
    for (int i = 0; i < strlen(s); i++)
    {

        if (isspace(s[i]))
        {


            p++;
            cout << i + 1;

        }
        else
        {
            cout << s[i];
        }

    }

    cout << "\n" << "Количество пробелов " << p;
}



// krat for.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    long int i, p = 1;
    setlocale(LC_ALL, "rus");
    for (i = 10; i < 100; i++) {
        if (i%13 == 0 && i%2 !=0)
        {
            p = p * i;
        }
    }
    cout << "Произведение двузначных нечетных чисел , кратных 13 равно " << p;
}


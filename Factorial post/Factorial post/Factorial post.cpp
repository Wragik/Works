// Factorial post.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    long int f;
    int n, i;
    setlocale(LC_ALL, "rus");
    cout << "Введите расчётный факториал ";
    cin >> n;
    f = i = 1;
    do
    {
        f *= i++;
    }     
    while (i <= n);
    cout << n << "!= " << f;



}


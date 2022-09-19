// primer function.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//max (a,b,c) = max(max(a,b),c)
#include <iostream>

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

using namespace std;
int main()
{
    int a, b, c,d;
    setlocale(LC_ALL, "rus");
    cout << "Введите a,b,c ";
    cin >> a >> b >> c;
    d = max(max(a, b), c);
    cout << "максимальное из a,b,c = " << d;
}


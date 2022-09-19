// IO masiv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i, a[5];
    for (i = 0; i < 5; i++)
    {
        cout << "a [" << i << "]= ";
        cin >> a[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "a[" << i << "]=" << a[i] << " ";
    }
    


}


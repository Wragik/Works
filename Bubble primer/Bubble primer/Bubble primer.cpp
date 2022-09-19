// Bubble primer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int x[] = { 6,4,9,3,2,1,5,7,8,10 };
    int i, j, n, a;
    n = sizeof(x) / sizeof(x[0]);
    for (i=0;i<n-1;i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                a = x[j];
                x[j] = x[j + 1];
                x[j + 1] = a;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}


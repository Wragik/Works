// double massiv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i, j, m, n, s = 0, a;
    double t[10][10];
    cout << "Введите количество столбцов m (от 1 до 10) ";
    cin >> m;
    cout << "Введите количество строк n (от 1 до 10) ";
    cin >> n;
    // Проверка 
    if (m > 10 || m <= 0)
    {
        cout << "Ошибка";
        return 0;
    }
    if (n > 10 || n <= 0)
    {
        cout << "Ошибка";
        return 0;
    }
    cout << "Введите число для сравнения ";
    cin >> a;
    ///////////
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            cout << "Введите элемент [" << i << "] [" << j << "] ";
            cin >> t[i][j];
        }
    }
        for (i = 0; i <= n-1; i++)
        {
            for (j = 0; j <= m-1; j++)
            {
                if (t[i][j] > a)
                {
                    s = s + i + j;
                }
            }

        }
        cout << "Сумма индексов элементов, больших a равна " << s;
}




#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int i, j, n, s1 = 0,s2 = 0;
    double a[10][10];
    cout << "Введите количество игроков (от 1 до 10) ";
    cin >> n;
    // Проверка 
    if (n > 10 || n <= 0)
    {
        cout << "Ошибка";
        return 0;
    }
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            if (i != j)
            {
                cout << "Введите элемент [" << i << "] [" << j << "] ";
                cin >> a[i][j];
                if (a[i][j] < 0)
                {
                    cout << "Ошибка";
                    return 0;
                }
            }

            
        
        }
        
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (i != j)
            {
                s1 = s1 + a[j][i];
            }
        }
        for (i = 0; i < n; i++)
        {
            if (i != j)
            {
                s2 = s2 + a[i][j];
            }
        }
        a[j][j] = s1 - s2;
        s1 = 0;
        s2 = 0;
    }
    cout << "   ";
    for (i = 1; i <= n;i++) 
    {
        cout <<" "<<i<<"  ";
    }
    cout << "\n";
    for (i = 0; i < n; i++)
    {
        cout << " " << i + 1 << " ";
        for (j = 0; j < n; j++)
        {
            cout << "[" << a[i][j] << "] ";
        }
        cout << "\n";
    }
} 



// Bubble practic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    
    int i,j,k,n=0;
    double a,t[20];
    cout << "Введите размерность массива (от 1 до 20) ";
    cin >> k;

    if (k > 20 || k <= 0 )
    {
        cout << "Ошибка";
        return 0;
    }
  
    for (i = 0; i < k; i++)
    {
        cout << "t[" << i << "]= ";
        cin >> t[i];
        if (t[i] ==0 )
        {
            n++;
            
            
        }

    }
    if (n <1) 
    {
        cout << "Нулевых элементов не найдено!" << "\n";
    }
    for (i = 0; i < k; i++)
    {
        if (t[i] == 0)
        {
            cout << "Первый нулевой элемент имеет индекс " << i << "\n";
            break;
        }
        
    }
    for (i = k; i > 0; --i)
    {
        if (t[i] == 0)
        {
            cout << "Последний нулевой элемент имеет индекс " << i << "\n";
            break;
        } 
    }
    for (i = 0; i < k - 1; i++)
    {
        for (j = 0; j < k - 1; j++)
        {
            if (t[j] > t[j + 1])
            {
                a = t[j];
                t[j] = t[j + 1];
                t[j + 1] = a;
            }
        }
    }
cout << "Массив после сортировки"<<"\n";
    for (i = 0; i < k; i++)
    {
        cout << t[i] << " ";
    }
}






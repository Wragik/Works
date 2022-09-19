// Struktur primer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int N = 5;
    int i;
    double maxs;
struct student{
    char fam[15];
    int kurs;
    char group[3];
    double stip;
};
student stud[N];
for (i = 0; i < N; i++)
{
    cout << "студент №" << i << "\n";
    cout << "Фамилия:";
    cin >> stud[i].fam;
    cout << "Курс:";
    cin >> stud[i].kurs;
    cout << "Группа:";
    cin >> stud[i].group;
    cout << "Стипендия:";
    cin >> stud[i].stip;
}
maxs = 0;
for (i = 0; i < N; i++)
{
    if (stud[i].stip > maxs)
    {
        maxs = stud[i].stip;
    }
}
cout << "Студенты получают макс стипендию "<< maxs << " p ";
for (i = 0; i < N; i++)
{
    if (stud[i].stip == maxs)
    {
        cout <<  "\n" << stud[i].fam;
    }
}


}


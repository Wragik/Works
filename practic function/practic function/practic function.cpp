#include <iostream>

int fact(int n, int i, double z)
{
    z = 1;
    for (i = 1; i<=n; i++)
    {
        z = z * (1 / i);
        //std::cout << z;
    }
    std::cout << z;
    
}

using namespace std;
int main()
{
    int n, i;
    double z = 1;
    setlocale(LC_ALL, "rus");
    cout << "Введите n ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << fact(n, i, z) << " ";
        cout
    }
}


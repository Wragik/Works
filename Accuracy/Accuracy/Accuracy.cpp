

#include <iostream>


using namespace std;
int main()
{
    const double eps = 0.000001;
    double s = 1., b = 1, n = 1, a = 1.;
    setlocale(LC_ALL, "rus");
    a = s + (1 / b*n);

    while (a-s > eps)
    {
        
        s = s + 1. / b;
        // cout << "s = " << s << "\n";
        n++;
        b = b * n;
        a = s + (1. / b);
        // cout << "a = " <<  a << "\n";

    }
    
    cout << "e = " << fixed << s << "\n";
}



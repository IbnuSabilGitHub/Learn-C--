#include <iostream>
using namespace std;

int main()
{

    double a, b, c, d;
    cout << "input a = ";
    cin >> a;
    cout << "input b = ";
    cin >> b;

    c = a;
    d = b;

    while (c != d)
    {
        if (c < d)
        {
            c += a;
            cout << "c += a = " << c << endl;
        }
        else if (c > d)
        {
            d += b;
            cout << "d += b = " << d << endl;
        }
    }

    while (a != b)
    {
        if (a < b)
        {
            b -= a;
            cout << "b -= a = " << b << endl;
        }
        else if (a > b)
        {
            a -= b;
            cout << "a -= b = " << a << endl;
        }
    }
    cout << "Hasil dari looping adalah = " << (c + d) / (a + b) << endl;
}
#include <iostream>
using namespace std;

double pangkat_inter(double x, double y)
{
    double hasil = x;
    for (int i = 1; i < y; i++)
    {
        hasil = hasil * x;
    }
    return hasil;
}

double pangkat_rekursif(double x, double y)
{

    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * pangkat_rekursif(x, (y - 1));
    }
}

int hitung(int x, int y)
{
    if (x + y == 0)
    {
        return y;
    }
    else if (x >= 0)
    {
        return hitung(x - 1, 2 * y);
    }
    return (x - 1, y - 1) + 1;
}

int factorial(int n)
{

    if (n == 1)
    {
        return n;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n)
{
    if ((n == 0) || (n == 1))
    {
        return n;
       
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    double x, y, hasil;

    cout << "Input angka = ";
    cin >> x;
    cout << "Input pangkat = ";
    cin >> y;

    cout << "Jadi" << x << " pangkat" << y << " = " << pangkat_inter(x, y) << endl;
    cout << "Jadi" << x << " pangkat" << y << " = " << pangkat_rekursif(x, y) << endl;
    cout << "Jadi" << x << " Rekursif" << y << " = " << hitung(x, y) << endl;
    cout << "Jadi" << x << " factorial" << y << " = " << factorial(x) << endl;
    cout << "Jadi" << x << " fibonacci" << y << " = " << fibonacci(x) << endl;
    return 0;
}
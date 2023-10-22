#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, hasil;
    char tri;
    cout << "SELAMAT DATANG DI KALKULATOR SIN, COS, TAN\n";
    cout << "Jika ingin melakukan perhitungan maka tulis Sin, Cos, Tan = ";
    cin >> tri;
    cout << "Masukkan nilai x: ";
    cin >> x;

    if (tri == 's')
    {
        hasil = sin(x);
        cout << "Hasil sin dari " << x << " adalah " << hasil << endl;
    }
    else if (tri == 'c')
    {
        hasil = cos(x);
        cout << "Hasil cos dari " << x << " adalah " << hasil << endl;
    }
    else if (tri == 't')
    {
        hasil = tan(x);
        cout << "Hasil tan dari " << x << " adalah " << hasil << endl;
    }
    else
    {
        cout << "Input salah!" << endl;
    }

    return 0;
}

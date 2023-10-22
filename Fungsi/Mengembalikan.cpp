#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Fungsi Daud
double Akar(double x)
{
    double out;

    out = sqrt(x);

    return out;
}

int main()
{
    double y, z, hasil;
    cout << "Masukan input = ";
    cin >> y;

    hasil = Akar(y);

    cout << hasil  << endl;

    return 0;
}
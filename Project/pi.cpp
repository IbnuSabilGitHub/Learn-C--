#include <iostream>
#include <cmath>
using namespace std;

double J_jari(double r)
{

    double luasLingkaran = M_PI * pow(r, 2);

    return luasLingkaran;
}

double volume_tabung(double r, double t)
{
    double luasLingkaran = J_jari(r);
    ;

    return luasLingkaran * t;
}

int main()
{

    double hasil, r, t;
    cout << "Input Radius tabung = ";
    cin >> r;
    cout << "Input Tinggi = ";
    cin >> t;

    hasil = volume_tabung(r, t);

    cout << " Jadi volume tabung dari radius = " << r << " dan "
         << "Tingginya " << t << " =  " << hasil << endl;

    return 0;
}

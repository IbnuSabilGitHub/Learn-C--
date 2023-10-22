#include <iostream>
#include <cmath>
using namespace std;


double quadrat(double x)
{
    double hasil = x * x;

    return hasil;
}

double v_piramida(double b, double h){

    double hasil;
    hasil =(quadrat(b)* h);
    hasil = hasil * 1/3;
    return hasil;
}





int main()
{
    double hasil, h, b;
    cout << "Input Radius tabung = ";
    cin >> b;
    cout << "Input Tinggi = ";
    cin >> h;

    hasil = v_piramida(b,h);

    cout << " Jadi volume tabung dari radius = " << h << " dan "
         << "Tingginya " << h << " =  " << hasil << endl;

    return 0;
}
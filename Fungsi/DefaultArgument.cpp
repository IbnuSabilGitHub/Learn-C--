#include <iostream>
using namespace std;
// Default Argument
double Volume(double p = 2, double l = 3, double t = 4);

int main()
{
    
    cout << "Jadi Volume = " << Volume(9, 8, 7) << endl;
    cout << "Jadi Volume = " << Volume(9, 8) << endl;
    cout << "Jadi Volume = " << Volume(9) << endl;
    cout << "Jadi Volume = " << Volume() << endl;

    return 0;
}
// Fungsi menghitung Volumr
double Volume(double p, double l, double t)
{

    return p * l * t;
}
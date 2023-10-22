#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double menghitung_luas(double p, double l)
{
    int x = p * l;
    return x;
}

double kuadrat(int x)
{
    int y = x * x;
    return y;
}

double jari_jari(double a, double b)
{
    int kuad, c;

    kuad = (kuadrat(a)) + (kuadrat(b));
    c = sqrt(kuad);

    return c;
}

void pytagoras()
{
    cout << "input a b" << endl;
}

int main()
{
    double a, b, pytha;
    pytagoras();
    cin >> a >> b;

    pytha = jari_jari(a, b);

    cout << "Jadi jari jari nya adalah = " << pytha << endl;

    return 0;
}
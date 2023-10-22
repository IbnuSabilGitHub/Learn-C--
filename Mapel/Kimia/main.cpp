#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double FraksiMol(double molA, double molB);
double FraksiMol1(double molA, double molB);
double Mol(double Massa, double Mr);
double mencariMassaPersen(double x);

int main()
{

    double fraksi, Xa, Xb;
    cout << "Fraksi di dalam Larutan : ";
    cin >> fraksi;

    cout << "Mr pereaksi : ";
    cin >> Xa;

    cout << "Masa pelarut : ";
    cin >> Xb;

    double mPelarut = mencariMassaPersen(fraksi);
    double mTerlarut = 100 - mPelarut;

    Xa = Mol(mPelarut, Xa);
    Xb = Mol(mTerlarut, Xb);

    cout << FraksiMol(Xa,Xb) <<endl;
    cout << FraksiMol1(Xa,Xb) <<endl;

    return 0;
}

double FraksiMol(double molA, double molB)
{
    return ((molA) / (molA + molB));
}
double FraksiMol1(double molA, double molB)
{
    return ((molB) / (molA + molB));
}

double Mol(double Massa, double Mr)
{
    return Massa / Mr;
}

double mencariMassaPersen(double x)
{
    return (x * (100 / 100));
}


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double Constanta(double constanta, double quadrat, double upperLimit, double lowerLimit);
double Limit(double UpperLimit, double LowerLimit, double n);
double Integral(double n);

int main()
{

    double constanta, upperLimit, lowerLimit, quadrat;

    cout << "Input f(x)";
    cout << endl;
    cout << "Input Constanta = ";
    cin >> constanta;

    cout << "Input Quadrat  = ";
    cin >> quadrat;

    cout << endl;
    cout << endl;

    cout << "Input Limit";
    cout << endl;
    cout << "Input Upper Limit (b) = ";
    cin >> upperLimit;
    cout << "Input Lower Limit (a) = ";
    cin >> lowerLimit;

    double fx = Constanta(constanta, quadrat, upperLimit, lowerLimit);

    if (fx != 0)
    {
        cout << "Jadi Hasil nya adalah = " << Limit(upperLimit, lowerLimit, quadrat) << endl;
    }
    else
    {
        cout << "Jadi Hasil nya adalah = " << Limit(upperLimit, lowerLimit, quadrat) << endl;
    }

    return 0;
}

// Function Untuk menentukan sifat, berdasarkan f(x) yang di integralkan  jika constanta di bagi penyebut(n+1)
double Constanta(double constanta, double quadrat, double upperLimit, double lowerLimit)
{                                               // Contoh : Ax^n+1/n+1 sisa bagi = 0 or != 0
    double integral = Integral(quadrat);        // Memanggil fungsi Integral untuk mengorapsi kan (n+1) dan memasukan value ke variable integral
    double modulus = fmod(constanta, integral); // Memanggil fungsi cmath untuk melakukan oprasi modulus terhadap variable constanta dan integral
    double value = constanta / integral;        // membagi variable constanta dan integral
    double limA = pow(upperLimit, integral);
    double limB = pow(lowerLimit, integral);

    if (modulus != 0) // Jika sisa bagi tidak sama dengan 0  . maka akan menggembalikan nilai false
    {
        value = (constanta / (integral * limA)) - (constanta / (integral * limA));
        return 0;
    }
    else // Jika sisabagi samadengan 0. maka akan menggembalikan nilai dari variable  value (atau hasil dari pembagian  constanta / integral)
    {
        return value;
    }
}

double Limit(double UpperLimit, double LowerLimit, double n)
{

    return pow(UpperLimit, Integral(n)) - pow(LowerLimit, Integral(n));
}

double Integral(double n)
{

    // Jika quadrat sama dengan nol, kembalikan 1
    // untuk menghindari pembagian dengan nol.
    if (n == 0)
    {
        return 1;
    }
    // Jika quadrat positif, kembalikan nilai quadrat + 1.
    else if (n > 0)
    {
        return n + 1;
    }
    // Jika quadrat negatif, kembalikan nilai negatif dari quadrat - 1.
    else
    {
        return -1 * (abs(n) - 1);
    }
}

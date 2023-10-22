// 8 Apr 2023
#include <iostream>
#include <limits>
using namespace std;

// Function factorial
long Factorial(long num)
{

    if (num == 1)// if num == 1 then return mum;
    {
        return num;
    }
    else
    {
        return num * Factorial(num - 1);// Melakukan Rekursif (Memangil fungsi dirinya sendiri) dan  mengurangi 1 nilai num setelah itu di kali dengan num
    }
}

int main()
{
    long num;// deklarasi num bertipe data long
    // input factorial
    cout << "Input Factorial = ";
    cin >> num;

    // Melakukan Validasi terhadap input num
    while (cin.fail())
    {
        cout << endl;
        cout << "Error!!. Input valid Number (Input valid number)" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Input Factorial = ";
        cin >> num;
    }

    cout << "Factorial = " << Factorial(num) << endl;// melakukan  oprasi terhadap input num dengan memangil function factorial
    return 0;
}
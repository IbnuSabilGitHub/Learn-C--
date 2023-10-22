#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

double kuadrat(int x);

double volume(double p, double l, double t);

double pytahgoras(double a, double b);

int main()
{

    char PilihCalcu;
    cout << "--------------------------------------------------------------" << endl;
    cout << "1. Aritmatika (a)" << endl;
    cout << "2. Modulus (b)" << endl;
    cout << "3. Kuadrat(c)" << endl;
    cout << "4. Akar(d)" << endl;

    cout << "--------------------------------------------------------------" << endl;
    cout << "Input Calu Yang ada pilih)" << endl;
    cin >> PilihCalcu;

    // Operator Aritmatika
    if (PilihCalcu == 'a')
    {
        double x, y, hasil;
        char operatorAritmatika;

        // Input angka 1
        cout << "Masukan angka pertama = ";
        cin >> x;
        // Memvalidasi input x
        while (cin.fail())
        {
            cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "masukan angka peratma: ";
            cin >> x;
        }

        // Input operator
        cout << "Masukan operator (-), (+), (*), (/) = ";
        cin >> operatorAritmatika;
        // Memvalidasi input operatorAritmatika
        while (operatorAritmatika != '-' && operatorAritmatika != '+' && operatorAritmatika != '*' && operatorAritmatika != '/' && operatorAritmatika != '%')
        {
            cout << endl;
            cout << "Operator yang bisa di input hanya (-), (+), (*), (/), (%)  \n";
            cout << "Masukan ulang operator (-), (+), (*), (/) = ";
            cin >> operatorAritmatika;
        }

        // Input angka 2
        cout << "Masukan angka kedua = ";
        cin >> y;
        // Memvalidasi input y
        while (cin.fail())
        {
            cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;

            cout << "Masukan angka kedua: ";
            cin >> y;
        }

        // Melakukan perhitungan berdasarkan input
        switch (operatorAritmatika)
        {
        case '+':
            hasil = x + y;
            cout << x << "+" << y << "= " << hasil << endl;
            break;
        case '-':
            hasil = x - y;
            cout << x << "-" << y << "=" << hasil << endl;
            break;
        case '*':
            hasil = x * y;
            cout << x << "*" << y << "=" << hasil << endl;
            break;
        case '/':
            hasil = x / y;
            cout << x << "/" << y << "=" << hasil << endl;
            break;
        default:
            cout << "Eror!!!!" << endl;
            break;
        }
    }
    else if (PilihCalcu == 'b')
    {
        int x, y, hasil;

        // Input pertama
        cout << "Masukan Angka perama (dibagi) = ";
        cin >> x;

        // Memvalidasi input x
        while (cin.fail())
        {
            cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Masukan angka pertama (dibagi) = ";
            cin >> x;
        }

        cout << "Masukan Angka kedua(pembagi) = ";
        cin >> y;

        // Memvalidasi input y
        while (cin.fail())
        {
            cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Masukan angka (Pembagi) = ";
            cin >> y;
        }

        hasil = (x % y);

        cout << "Jadi hasil sisa dari pembagian" << x << "%" << y << " = " << hasil << endl;
    }
    else if (PilihCalcu == 'c')
    {

        double x, hasil;

        cout << "Input kuadrat = ";
        cin >> x;
        while (cin.fail())
        {

            cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input akar = ";
            cin >> x;
        }

        hasil = kuadrat(x);
        cout << "Kuadrat dari " << x << " = " << hasil << endl;
    }
    else if (PilihCalcu == 'd')
    {
        double x, hasil;

        cout << "Input akar = ";
        cin >> x;
        while (cin.fail())
        {

            cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input akar = ";
            cin >> x;
        }

        hasil = sqrt(x);

        cout << "Akar dari " << x << " = " << hasil << endl;
    }
    return 0;
}

double kuadrat(double x)
{

    return x * x;
}

double volume(double p, double l, double t)
{

    return p * l * t;
}

double pytahgoras(double a, double b)
{
    double kuad, hasil;

    kuad = (kuadrat(a)) + (kuadrat(b));
    hasil = sqrt(hasil);

    return hasil;
}
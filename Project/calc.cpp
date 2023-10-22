// Kalkulator Sederhana 30-Mar-2023
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    float x, y, hasil;
    char operatorAritmatika;

    // Input angka 1
    cout << "Masukan angka pertama =";
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
    cout << "Masukan operator (-), (+), (*), (/), (%) =";
    cin >> operatorAritmatika;
    // Memvalidasi input operatorAritmatika
    while (operatorAritmatika != '-' && operatorAritmatika != '+' && operatorAritmatika != '*' && operatorAritmatika != '/' && operatorAritmatika != '%')
    {
        cout << endl;
        cout << "Operator yang bisa di input hanya (-), (+), (*), (/), (%)  \n";
        cout << "Masukan ulang operator (-), (+), (*), (/), (%)=";
        cin >> operatorAritmatika;
    }

    // Input angka 2
    cout << "Masukan angka kedua=";
    cin >> y;
    // Memvalidasi input y
    while (cin.fail())
    {
        cout << "Eror!!. Masukan Number yang valid (Masukan kembali angka yang valid)" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Masukan angka kedua: ";
        cin >> y;
    }

    // Melakukan perhitungan berdasarkan input
    switch (operatorAritmatika)
    {
    case '+':
        hasil = x + y;
        cout << x << "+" << y << "=" << hasil << endl;
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
    case '%':
        // Kondisi jika input yg di masukan user "%"
        if (operatorAritmatika == '%')
        {
            // Mengubah data float mejadi int
            int int_mod1 = (int)x;
            int int_mod2 = (int)y;
            int int_hasil = int_mod1 % int_mod2;
            hasil = int_hasil;
            cout << int_mod1 << "%" << int_mod2 << "=" << hasil << endl;
            cout << "(Modulus hanya di oprasikan di tipe data int)" << endl;
        }
        break;
    default:
        cout << "Eror!!!!" << endl;
        break;
    }

    return 0;
}

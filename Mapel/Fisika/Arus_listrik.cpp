#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Menu();
bool verifikasiSatuan(string &satuan);
double konfersiSatuan(double val, string &satuan);
double muatanListrik(double i, double t);
int main()
{
    int BufferMenu = Menu();
    char Continue;
    double I, Q, T, R, hasilKonfersi, hasil;
    string satuan;
    enum EnumMenu
    {
        DitMuatanListrik = 1,
        DitWaktu
    };

    while (BufferMenu != 3)
    {
        switch (BufferMenu)
        {
        case DitMuatanListrik:
        {
            cout << "Diketahui" << endl;
            cout << "I (Arus listrik) = ";
            cin >> I;
            int num;
            cout << "A = Amper" << endl;
            cout << "mA = Miliamper" << endl;
            cout << "kA = Kiloamper" << endl;
        satuan_false:
            cout << "satuan I :";
            cin >> satuan;
            if (verifikasiSatuan(satuan) == true)
            {
                hasilKonfersi = konfersiSatuan(I, satuan);
                goto satuan_true;
            }
            else
            {
                num++;
                if (num <= 5)
                {
                    cout << "Input opsi ini: " << endl;
                    cout << "A = Amper" << endl;
                    cout << "mA = Miliamper" << endl;
                    cout << "kA = Kiloamper" << endl;
                }
                goto satuan_false;
            }
        satuan_true:
            cout << "T( waktu ) = " << endl;
            cin >> T;

            hasil = muatanListrik(I, T);

            cout << "jadi Q = " << hasil << " C" << endl;
            break;
        }
        case DitWaktu:
        {
            cout << "Diketahui" << endl;
            cout << "I (Arus listrik) = ";
            cin >> I;
            int num;
            cout << "A = Amper" << endl;
            cout << "mA = Miliamper" << endl;
            cout << "kA = Kiloamper" << endl;
        satuan_false:
            cout << "satuan I :";
            break;
        }
        default:
        {
            cout << "Fatal Eror" << endl;
            break;
        }
        }
    loopContinue:
        cout << "Continue (y/n) :";
        cin >> Continue;

        if ((Continue == 'y') || (Continue == 'Y'))
        {
            BufferMenu = Menu();
        }
        else if ((Continue == 'n') || (Continue == 'N'))
        {
            break;
        }
        else
        {
            goto loopContinue;
        }
    }

    return 0;
}
// Function Menu
int Menu()
{
    system("clear");
    int input;
    cout << "--------------------" << endl;
    cout << "1. Ditanya Muatan Listrik [q] (coulomb)" << endl;
    cout << "2. Ditanya Waktu (t) (second)" << endl;
    cout << "3. End Program" << endl;
    cout << "--------------------" << endl;
loopMenu:
    int val;
    cout << "[1-3]: ";
    cin >> input;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (val == 5)
        {
            val = ((val % 2) - 1);
            cout << "Masukan Input sesuai menu di atas [1-5]" << endl;
            goto loopMenu;
        }
        else
        {
            val += 1;
            goto loopMenu;
        }
    }
    return input;
}

bool verifikasiSatuan(string &satuan)
{
    if ((satuan != "A" && satuan != "a") &&
        (satuan != "Ma" && satuan != "mA" && satuan != "ma" && satuan != "MA") &&
        (satuan != "Ka" && satuan != "kA" && satuan != "ka" && satuan != "KA"))
    {
        return false;
    }
    else
    {
        return true;
    }
}
double konfersiSatuan(double val, string &satuan)
{

    if (satuan == "A" || satuan == "a")
    {
        return val;
    }
    else if (satuan == "Ma" || satuan == "mA" || satuan == "ma" || satuan == "MA")
    {
        return val / 1000;
    }
    else if (satuan == "Ka" || satuan == "kA" || satuan == "ka" || satuan == "KA")
    {
        return val * 1000;
    }
    else
    {
        return val;
    }
}

double muatanListrik(double i, double t)
{

    return i * t;
}
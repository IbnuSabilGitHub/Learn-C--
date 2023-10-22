#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int OpsiFuntion();
double Fseri();
double Fparaler();

int main()
{

    int BufferPik = OpsiFuntion();
    double Value;
    enum option
    {
        Seri = 1,
        Paralaler = 2,
        SeriAndParaler = 3
    };

    switch (BufferPik)
    {
    case Seri:
        Value = Fseri();
        cout << "Rs = " << Value << endl;
        break;

    case Paralaler:
        Value = Fparaler();
        cout << "Rs = " << Value << endl;
    default:
        break;
    }
    return 0;
}

double Fseri()
{
    int n;
    cout << "Jumlah R(hambatan) dalam rangkaian listrik : ";
    cin >> n;

    int Rn[n];
    int Rs = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "R" << (i + 1) << " = ";
        cin >> Rn[i];
        Rs += Rn[i];
    }
    return Rs;
}

double Fparaler()
{
    int n;
    cout << "Jumlah R(hambatan) dalam rangkaian listrik : ";
    cin >> n;

    int Rn[n];
    int Rs = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "R" << (i + 1) << " = ";
        cin >> Rn[i];
    }

    double valMax = Rn[0];
    double value = 0;
    double hasil = 0;
    int Rnn[n];
    for (int i = 0; i < n; i++)
    {
        if (Rn[i] > valMax)
        {
            valMax = Rn[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        Rnn[i] = (valMax / Rn[i]);
        value += Rnn[i];
    }

    hasil = (value / valMax);
    if (hasil > 0)
    {
        hasil = ( valMax / value);
    }
    return hasil;
}

int OpsiFuntion()
{
    system("clear");
    cout << "1. Seri" << endl;
    cout << "2. Paraler" << endl;
    cout << "3. Seri dan Paraler" << endl;
    int pik;
    int val = 0;
loop:
    cout << "1-3 : ";
    cin >> pik;

    while (cin.fail() || pik > 3)
    {

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (val > 5)
        {
            val = ((val % 2) - 1); // value dari val akan di kembalikan menjadi 0 atau null
            cout << "Tolong input sesuai opsi 1-5." << endl;
            goto loop;
        }
        else
        {
            val++;
            goto loop;
        }
    }

    return pik;
}
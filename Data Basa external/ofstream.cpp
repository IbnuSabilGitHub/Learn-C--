#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

void validation()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{

    string name, kelas, umur, sekolah;
    string data, a, out;
    char x;

    ofstream dataBase;
    ifstream getData;

    do
    {
        cout << "Ingin melihan data peserta y/n : ";
        cin >> x;
    } while (x != 'y' && x != 'n');

    if (x == 'y')
    {
        cout << "Nama : ";
        cin >> name;

        cout << "umur : ";
        cin >> umur;

        cout << "sekolah : ";
        cin >> sekolah;
        validation();

        dataBase.open("Data_daftar.txt", ios::app);
        dataBase << "Nama    : " << name << endl;
        dataBase << "Umur    : " << umur << endl;
        dataBase << "Sekolah : " << sekolah << endl;
        dataBase << "----------- \n";
        dataBase.close();
    }
    else if (x == 'n')
    {
        int Value = 0;
        getData.open("Data_daftar.txt");

        while (!getData.eof())
        {
            getline(getData, data);
            out.append("\n" + data);
            if (data == "----------- ")
            {
                Value++;
            }
        }

        cout << out << endl;

        cout << "\n \n"
             << "Total Data Peserta : " << Value << endl;
        getData.close();
    }

    return 0;
}
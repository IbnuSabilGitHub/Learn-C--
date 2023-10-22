#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <bitset>
using namespace std;

struct Coffein
{
    string Barang;
    int harga;
    string Deskipsi;
};

void validation();
void menu();
void InjectionsDataPantauan(string &Buffer, bool val);
void InjectionsDataBase(string &User, string &pesanan, int JumlahPesanan, string &alamat, int total);
int searchDataHarga(string &Input, int count);

int main()
{

    char yn;

    cout << "Ingin belanja? y/n : ";
    cin >> yn;

    if (yn == 'n')
    {
        string pw = {"AdCo1 AdCo2 AdCo3 AdCo4"};
        string dataPw;

        cout << "Password Admian : ";
        cin >> dataPw;

        int valDataPW = dataPw.size();
        int position = pw.find(dataPw);

        if (position != string::npos)
        {
            bool val = true;
            InjectionsDataPantauan(dataPw, val);
            string chackPw = pw.substr(position, valDataPW);
            cout << "Login  Admin Berhasil " << endl
                 << endl;

            string command;
            cout << "Selamat datang " << dataPw << endl;
            do
            {
                cout << "Input Command : ";
                cin >> command;

            } while (command != "help" && command != "input" && command != "delete");

            if (command == "help")
            {
                cout << "Help     -h          untuk memunculkan Commad yang bisa dilakukan" << endl;
            }
            else if (command == "input")
            {
                cout << "proses" << endl;
            }
            else if (command == "delete")
            {
                cout << "proses1" << endl;
            }
        }
        else
        {
            bool val = false;
            dataPw = "Anonim";
            InjectionsDataPantauan(dataPw, val);
            cout << "Login  Admin Gagal " << endl;
        }
    }
    else
    {
        string C, name, alamat;
        int Count;
        menu();

        cout << "Nama : ";
        cin >> name;

        do
        {
            cout << "Pesanan : ";
            cin >> C;
        } while (C != "--bc" && C != "--wc" && C != "--nesc" && C != "--inc" && C != "--tc" && C != "--sf" && C != "--abc"); // Validasi input user

        do
        {
            cout << "Jumlah pesanan : ";
            cin >> Count;
            validation();
        } while (cin.fail());

        cout << "Alamat : ";
        cin >> alamat;

        ifstream searchHarga;
        string harga;

        InjectionsDataBase(name, C, Count, alamat, searchDataHarga(C, Count));
    }

    return 0;
}


// Functions

ifstream dataBase;
string Output, Buffer;

void menu()
{

    dataBase.open("DataBase.txt");

    while (!dataBase.eof())
    {

        getline(dataBase, Buffer);
        Output.append("\n" + Buffer);
    }

    cout << Output << endl;
    dataBase.close();
}

int searchDataHarga(string &Input, int count)
{

    dataBase.open("DataBase.txt");
    string val;

    while (getline(dataBase, Buffer))
    {
        size_t position = Buffer.find(Input);
        size_t onlyNum;
        if (position != string::npos)
        {
            position += Input.length() + 1;
            val = Buffer.substr(0, position);
            val = Buffer.erase(0, val.length());
        }
    }
    int castingDecimal = stoi(val);

    dataBase.close();
    return (castingDecimal * count);
}
void validation()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void InjectionsDataPantauan(string &Buffer, bool val)
{
    ofstream dataBase;
    if (val)
    {
        dataBase.open("DataPantauan.txt", ios::app);
        dataBase << "Seseorang berhasil bersahil login" << endl;
        dataBase << "Teridentifikasi sebgai Admin dengan Code Name = " << Buffer << endl;
        dataBase << "-------------------------- \n";
        dataBase.close();
    }
    else
    {
        dataBase.open("DataPantauan.txt");
        dataBase << "Seseorang gagal logi" << endl;
        dataBase << Buffer << endl;
        dataBase << "-------------------------- \n";
        dataBase.close();
    }
}

void InjectionsDataBase(string &User, string &pesanan, int JumlahPesanan, string &alamat, int total)
{
    ofstream dataBase;

    dataBase.open("HistoryBuyer.txt", ios::app);

    dataBase << "Name : " << User << endl;
    dataBase << "Pesanan : " << pesanan << endl;
    dataBase << "JumlahPesanan : " << pesanan << endl;
    dataBase << "Alamat : " << alamat << endl;
    dataBase << "total : " << total << endl;
    dataBase << "------------------------" << endl;

    dataBase.close();
}

int CountOutput(int JumlahPesanan, int HargaBarang)
{

    return JumlahPesanan * HargaBarang;
}
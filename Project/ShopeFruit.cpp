// Project start 14Mei 2023
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <unordered_map>
#include <vector>
using namespace std;

struct Fruit
{
    string Name;
    int count;
    int harga;
    int idk;
};

string ListFruit = {"Appel Mangga Jeruk Kurma Anggur Rambutan Durian Pisang"};

unordered_map<string, vector<int>> fruitIndexMap = {
    {"Appel", {4000, 2000, 1234}},
    {"Mangga", {10000, 700, 1232}},
    {"Jeruk", {3000, 6000, 423}},
    {"Kurma", {500, 10000, 234}},
    {"Anggur", {500, 83223, 9172}},
    {"Rambutan", {300, 82232, 7162}},
    {"Durian", {50000, 53, 31}},
    {"Pisang", {2000, 742, 912}}};

string searchData(string &data);
double coutData(string &Harga, int numValue);
int buyFruit(int numUser, string &data, int numValue);
void line();
void Menu();

int main()
{

    cout << "Input [a] untuk melakukan check informasi buah" << endl;
    cout << "Input [b] untuk melakukan pembelian" << endl;

    char input;
    cout << "Apayang ingin anda lakukan : ";
    cin >> input;

    string dataSearch;
    Fruit appel;

    int forDataHarga = 0;
    int forDataJumlah = 1;
    int forDataUnknow = 2;

    switch (input)
    {
        {
        case 'a':
        {

            cout << "Fruit Search : ";
            cin >> dataSearch;

            if (searchData(dataSearch) == dataSearch)
            {
                appel.Name = dataSearch;
                appel.harga = coutData(dataSearch, forDataHarga);
                appel.count = coutData(dataSearch, forDataJumlah);
                appel.idk = coutData(dataSearch, forDataUnknow);

                cout << " Buah : " << appel.Name << endl;
                cout << " Harga : " << appel.harga << endl;
                cout << " Jumlah yang tersedia : " << appel.count << endl;
                cout << "Unknowm : " << appel.idk << endl;
            }
            else
            {
                cout << "Maaf buah tersebut Belum tersedia di toko kami" << endl;
            }

            break;
        }
        case 'b':
        {
            int countBuyFruit, num;

            do
            {
                cout << "Jumlah pesanan jenis Buah : ";
                cin >> num;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (cin.fail());

            string dataBaseSearch[num];
            int dataBaseCount[num];
            int dataBaseTotal[num];

            for (int i = 0; i < num; i++)
            {
                cout << endl;
                cout << "Jenis Buah yang ingin di beli ( " << (i + 1) << " )  : ";
                cin >> dataSearch;

                string search = searchData(dataSearch);
                if (search == dataSearch)
                {
                    appel.Name = dataSearch;
                    appel.harga = coutData(dataSearch, forDataHarga);
                    cout << "Buah  : " << appel.Name << endl;
                    cout << "Harga : " << appel.harga << endl;
                }
                else
                {
                    cout << "Jenis buah tersebut tidak tersedia di toko kami" << endl;
                    cout << endl;
                    void Menu();
                }

                cout << "Input Jumlah yang ingin di beli : ";
                cin >> countBuyFruit;

                int total = buyFruit(countBuyFruit, dataSearch, forDataHarga);

                dataBaseSearch[i] = dataSearch;
                dataBaseCount[i] = countBuyFruit;
                dataBaseTotal[i] = total;
            }
            int TotalPembayaran = 0;

            cout << endl;
            cout << "-------KONFIRMASI PESANAN--------" << endl;
            for (int i = 0; i < num; i++)
            {

                cout << "Pesanan                : " << (i + 1) << endl;
                cout << "Buah                   : " << dataBaseSearch[i] << endl;
                cout << "Harga                  : " << coutData(dataBaseSearch[i], forDataHarga) << endl;
                cout << "Jumlah pesanan Perbuah : " << dataBaseCount[i] << endl;
                cout << "Total Pesanan Ke-" << (i + 1) << "     = " << dataBaseTotal[i] << endl;
                line();
                TotalPembayaran += dataBaseTotal[i];
            }

            cout << "Total Semua Pesanan : " << TotalPembayaran << endl;
            cout << endl;
            char cabang;
            cout << "Harap Konfirmasi Pesanan y/n : ";
            cin >> cabang;

            int UangUser;
            if (cabang == 'y')
            {
                bool Verification = false;
                while (Verification == false)
                {
                    cout << "Input Pembayaran = ";
                    cin >> UangUser;

                    if (UangUser == TotalPembayaran || UangUser > TotalPembayaran)
                    {
                        int kembalian = UangUser - TotalPembayaran;
                        line();
                        cout << "Pembayaran Sukses !!" << endl;
                        line();
                        cout << "Total belanja  :" << TotalPembayaran << endl;
                        cout << "Pembayaran : " << UangUser << endl;
                        cout << "Kembalain : " << kembalian << endl;
                        cout << "\n "
                             << "TERIMAKASIH TELAH MEMBELI BUAH BUAHAN KAMI" << endl;
                        Verification = true;
                    }
                    else if (UangUser < TotalPembayaran)
                    {
                        line();
                        cout << "  TERJADI KESALAHAN !! \n"
                             << "Pembayaran anda gagal di karena pembayaran kurang dari total belanja \n"
                             << "Tolong lakukan pembayaran ulang..." << endl;
                        cout << endl;
                        Verification = false;
                    }
                }
            }

            break;
        }
        default:
            break;
        }
    }
    return 0;
}
string searchData(string &data)
{
    int coutData = data.size();
    int fruitFind = ListFruit.find(data);
    return ListFruit.substr(fruitFind, coutData);
}

double coutData(string &Harga, int numValue)
{

    auto x = fruitIndexMap.find(Harga);
    int valueIndex = numValue;
    vector<int> &values = x->second;

    if (x != fruitIndexMap.end())
    {

        return values[valueIndex];
    }
    // Jika tidak ada kecocokan
    return 0;
}

void Menu()
{

    for (const auto &pair : fruitIndexMap)
    {
        string x = pair.first;
        cout << "Jenis : " << x << endl;
        cout << "Harga : " << coutData(x, 1) << endl;
    }
}

int buyFruit(int numUser, string &data, int numValue)
{

    return (numUser * coutData(data, numValue));
}

void line()
{
    cout << "------------------------------------------------------------" << endl;
}

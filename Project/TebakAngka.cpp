
#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

int main()
{

    while (true) // Looping terus menerus
    {
        int numRandom, value; //Deklarasi Variabel
        char YorN;//Deklarasi Variabel
        numRandom = 1 + (rand() % 10); // Memanggil Fungsi rand()/nilai random dari standard libraries <cstdlib>
        // input value untuk menebak angka yang akan keluar
        cout << "Tebak angka 1-10 = ";
        cin >> value;

        while (cin.fail()) // Memvalidasi input 
        {
            cout << endl;
            cout << "Input anda tidak vaild. Tolong masukan ulang input (HANYA ANGKA SAJA)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Tebak angka 1-10 = ";
            cin >> value;
        }

        if (value == numRandom) // Kodisi disaat user benar menebak angka
        {

            cout << "Selamat Jawaban ada BENAR!! " << value << " = " << numRandom << endl;
        }
        else // Kondisi disaat user salah menebak angka
        {
            cout << "Jawaban anda SALAH!! " << value << " != " << numRandom << endl;
        }

        // input untuk memutuskan apakah user akan berhenti bermain atau tidak
        cout << "input 'y' untuk berhenti = ";
        cin >> YorN;

        while (YorN != 'y' && YorN != 'n') // Memvalidasi input YorN
        {
            cout << "Input anda tidak vaild. \n"
                 << " Tolong masukan ulang input (y) = ";
            cin >> YorN;
        }

        if (YorN == 'y') // Kondisi diaat user tidak ingin melanjukan permainan(Akan break atau keluar dari looping agar program berakhir)
        {
            break;
        }
        else if (YorN == 'n')// Kondisi di saat user ingin melanjukan bermain(akan loop)
        {
            cout << endl;
        }
    }

    //End of TebakAgka Program (Apr 07 2023)
    return 0;
}
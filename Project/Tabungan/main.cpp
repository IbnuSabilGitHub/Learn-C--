// 14 Jul 2023
#include "header.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    Siswa structBuffer, output;
    int opsiBuffer = Opsi(); // input opsi dengan calling function Opsi();
    fstream Mystream;
    char listContinue;

    enum option // merubah value Opsi(); menjadi variabel
    {
        INPUT = 1,
        READ,
        DELETE,
        CHANGE,
        END
    };
    OpenTheData(Mystream); // Calling Function Open file
    while (opsiBuffer != 5)
    {
        // Menentukan oprasi yang di pilih sesuai Opsi();
        switch (opsiBuffer)
        {
        case INPUT:
        {
            inputDataToFile(Mystream);
            std::cout << "waduh111" << std::endl;

            break;
        }
        case READ:
        {

            cout << "Read Data Siswa" << endl;
            // output = read(0, Mystream);
            cout << output.name << endl;
            cout << output.Kelas << endl;
            cout << output.jurusan << endl;
            cout << output.noAbsen << endl;
            break;
        }
        case DELETE:
        {
            cout << " Delete Data Siswa" << endl;
            /* code */
            break;
        }
        case CHANGE:
        {
            cout << "Change Data Siswa" << endl;
            /* code */
            break;
        }

        default:
        {
            break;
        }
        }
    labelContinue:
        cout << "continue (y/n) : ";
        cin >> listContinue;
        if ((listContinue == 'y') || (listContinue == 'Y'))
        {

            opsiBuffer = Opsi();
        }
        else if ((listContinue == 'n') || (listContinue == 'N'))
        {
            break;
        }
        else
        {
            goto labelContinue;
        }
    }
    cout << "---END" << endl;
    // Mystream.close(); // Menutup kembali file

    return 0;
}

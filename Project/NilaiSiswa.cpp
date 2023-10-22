#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 10> value; // Memanggil fungsi array

    // Mengambil data dari user
    for (int i = 0; i <= value.size(); i++) // Looping dengan nilai i mulai dari 0. Sayrat loop jika i LebihKecilSamadengan dari size array. i akan di tambah 1 selama looping bernilai ture
    {
        if (i == 0) // Kondisi di saat i samaDengan nol. Akan Memunculkan text(Jumlah Warga dengan umur 5-9   = ) di layar
        {
            cout << "Jumlah Warga dengan umur 5-9   = ";
        }
        else // Kondisi di saat i tidak lagi sama dengan nol. Akan Memunculkan text(Jumlah Warga dengan umur), dan melakukan oprasi Aretmatika
        {
            cout << "Jumlah Warga dengan umur " << (i * 5 + 5) << "-" << (i * 5 + 9) << " = ";
        }
        cin >> value[i]; // Input ke array dengan nilai dari i
    }

    // Menampilakan data dari user dengan grafik *
    for (int i = 0; i <= value.size(); i++) // Looping dengan nilai i mulai dari 0. Sayrat loop jika i LebihKecilSamadengan dari size array. i akan di tambah 1 selama looping bernilai ture
    {
        if (i == 0)
        {
            cout << "5-9   : "; // Kondisi di saat i samaDengan nol. Akan Memunculkan text(5-9   : ) di layar
        }
        else // Kondisi di saat i tidak lagi sama dengan nol. melakukan oprasi Aretmatika
        {
            cout << (i * 5 + 5) << "-" << (i * 5 + 9) << " : ";
        }
        for (int j = 0; j <= value[i]; j++)// Loop dengan variable j berniali 0. Sayat jika j LebihKecilSamaDengan dari data value yang telah di input user
        {
            cout << "*";
        }
        cout << endl;
    }

    // End of Mendata Umur Warga dengan grafis Program (13 Apr 2023)
}
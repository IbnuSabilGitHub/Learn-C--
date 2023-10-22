#include <iostream>
#include <limits>
using namespace std;

void Line();

int main()
{

    char Name, email, Alu_sd, Alu_smp, Alu_sma, Jurusan_1, Jurusan_2, Jurusan_3, Uni_1, Uni_2, Uni_3, tujuan;
    long Bdate, noHp, NIK;

    cout << "Nama : ";
    cin >> Name;

    cout << "Tanggal Lahir : ";
    cin >> Bdate;

    cout << "No Headphone : ";
    cin >> noHp;

    cout << "Alamat Email : ";
    cin >> email;

    cout << "NIK/NISN : ";
    cin >> NIK;

    Line();
    cout << "Isi dengan nama riwayat sekolah dan tempat \n";
    cout << "Alumni SD : ";
    cin >> Alu_sd;
    cout << "Alumni SMP : ";
    cin >> Alu_smp;
    cout << "Alumni SMA/SMK/MA : ";
    cin >> Alu_sma;
    Line();
    cout << endl;
    Line();

    cout << "Universitas (pilihan 1) : ";
    cin >> Uni_1;
    cout << "Universitas (pilihan 3) : ";
    cin >> Uni_2;
    cout << "Universitas (pilihan 2) : ";
    cin >> Uni_3;

    cout << endl;

    cout << "Jurusan (pilihan 1) : ";
    cin >> Jurusan_1;
    cout << "Jurusan (pilihan 2) : ";
    cin >> Jurusan_2;
    cout << "Jurusan (pilihan 3) : ";
    cin >> Jurusan_3;
    Line();

    cout << endl
         << endl;

    cout << "Tujuan and lanjut ke universitas : ";
    cout << tujuan;

    cout << endl
         << endl;
    void Line();

    cout << "MEMPROSES DATA !!!" << endl;

    void Line();

    cout << "Nama : " << Name, '\n';
    cout << "Tanggal Lahir : " << Bdate, '\n';
    cout << "No Headphone : " << noHp, '\n';
    cout << "Alamat Email : " << email, '\n';
    cout << "NIK/NISN : " << NIK, '\n';
    Line();
    cout << "Isi dengan nama riwayat sekolah dan tempat \n";
    cout << "Alumni SD : ";
    cin >> Alu_sd;
    cout << "Alumni SMP : ";
    cin >> Alu_smp;
    cout << "Alumni SMA/SMK/MA : ";
    cin >> Alu_sma;
    Line();
    cout << endl;
    Line();

    cout << "Universitas (pilihan 1) : ";
    cin >> Uni_1;
    cout << "Universitas (pilihan 3) : ";
    cin >> Uni_2;
    cout << "Universitas (pilihan 2) : ";
    cin >> Uni_3;

    cout << endl;

    cout << "Jurusan (pilihan 1) : ";
    cin >> Jurusan_1;
    cout << "Jurusan (pilihan 2) : ";
    cin >> Jurusan_2;
    cout << "Jurusan (pilihan 3) : ";
    cin >> Jurusan_3;
    Line();

    cout << endl
         << endl;

    cout << "Tujuan and lanjut ke universitas : ";
    cout << tujuan;

    return 0;
}

void Line()
{
    cout << "-----------------------------------" << endl;
}
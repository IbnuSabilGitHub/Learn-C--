#include <iostream>
#include <fstream>
using namespace std;

struct StrukturData
{
    // int point;
    string name;
    string Kelas;
    string jurusan;
    string noAbsen;
};

void write(int position, StrukturData &buffer, std::fstream &file)
{

    file.seekp((position - 1) * sizeof(StrukturData), std::ios::beg); // ambil posisi ke paling awal file
    // seekp((di karena kan nilai index maka di kurang satu) * ukuran struct StrukturData, ke paling awal file)
    file.write(reinterpret_cast<char *>(&buffer), sizeof(StrukturData)); // tulis data
}

// Sepertinya fungsi ini yang menyerababkan eror
StrukturData read(std::fstream &file, int position)
{
    StrukturData Buffer;

    file.seekg((position - 1) * sizeof(StrukturData), std::ios::beg);
    file.read(reinterpret_cast<char *>(&Buffer), sizeof(StrukturData));
    if (file.fail())
    {
        cout << "Failed to read data." << endl;
    }
    else
    {
        cout << "Berhasil" << endl;
        // Gunakan dataRead sesuai kebutuhan.
    }
    return Buffer;
}

int main()
{

    StrukturData Data;

    fstream myfile;

    myfile.open("Data.bin", ios::in | ios::out | ios::binary);
    if (!myfile.is_open())
    {
        cout << "Failed to open file." << endl;
        return 1; // Keluar dari program jika file tidak dapat dibuka.
    }

    cout << "Name : ";
    getline(cin, Data.name);
    cout << "Kelas : ";
    getline(cin, Data.Kelas);
    cout << "Jurusan: ";
    getline(cin, Data.jurusan);
    cout << "noAbsen : ";
    getline(cin, Data.noAbsen);

    write(1, Data, myfile);
    myfile.close(); // Tutup file sebelum membuka kembali.
    myfile.open("Data.bin", ios::in | ios::out | ios::binary);

    StrukturData dataRead = read(myfile, 1);
    if (myfile.fail())
    {
        cout << "Failed to read data." << endl;
    }
    else
    {
        // Gunakan dataRead sesuai kebutuhan.
    }

    return 0;
}
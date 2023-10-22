#include "header.h"
#include <iostream>
#include <limits>
#include <string>
#include <fstream>

// extern Siswa siswaBuffer;

// Function Menu
int Opsi()
{
    system("clear"); // clear terminal
    int input;
    std::cout << "--------------------" << std::endl;
    std::cout << "1. Input Data Siswa" << std::endl;
    std::cout << "2. Read Data Siswa" << std::endl;
    std::cout << "3. Delete Data Siswa" << std::endl;
    std::cout << "4. Change Data Siswa" << std::endl;
    std::cout << "5. Program end" << std::endl;
    std::cout << "--------------------" << std::endl;
loopOpsi: // point kembali
    int val;
    std::cout << "[1-5] : ";
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Menghapus enter dari cin input
    while (std::cin.fail() || input > 5)                                // Jika cin tidak berupa angka atau cin lebih dari 5
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (val > 5) // Jika val point telah lebih dari 5
        {
            val = ((val % 2) - 1); // value dari val akan di kembalikan menjadi 0 atau null
            std::cout << "Masukan Input sesuai menu di atas [1-5]" << std::endl;
            goto loopOpsi; // Kembali ke cin input awal
        }
        else // jika tidak
        {
            val++;         // val akan di tambah satu
            goto loopOpsi; // Kembali ke cin input awal
        }
    }
    return input;
}

// Function Write Data
void write(int position, Siswa &buffer, std::fstream &file)
{

    file.seekp((position - 1) * sizeof(Siswa), std::ios::beg); // ambil posisi ke paling awal file
    // seekp((di karena kan nilai index maka di kurang satu) * ukuran struct Siswa, ke paling awal file)
    file.write(reinterpret_cast<char *>(&buffer), sizeof(Siswa)); // tulis data
}

// Read data funtion
Siswa read(std::fstream &file, int position)
{
    Siswa Buffer;

    file.seekg((position - 1) * sizeof(Siswa), std::ios::beg);
    file.read(reinterpret_cast<char *>(&Buffer), sizeof(Siswa));
    return Buffer;
}

// get size data funtion
int getSizeData(std::fstream &file)
{
    int start, end;
    file.seekg(0, std::ios::beg);
    start = file.tellg();
    file.seekg(0, std::ios::end);
    end = file.tellg();

    return (end - start) / sizeof(Siswa);
}

// Input data Function
void inputDataToFile(std::fstream &file)
{

    Siswa Data, lastBuffer;

    int size = getSizeData(file);
    std::cout << size << std::endl;
    Data.Point = 0;

    if (size == 0)
    {
        Data.Point = 1;
    }
    else
    {
        lastBuffer = read(file, size);
        Data.Point = lastBuffer.Point + 1;
        std::cout << "Point " << lastBuffer.Point << std::endl;
 
    }

    std::cout << "Nama :";
    std::getline(std::cin, Data.name);

    std::cout << "Kelas :";
    std::getline(std::cin, Data.jurusan);
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Menghapus enter dari cin Kelas

    std::cout << "Jurusan :";
    std::getline(std::cin, Data.jurusan);

    std::cout << "No Absen :";
    std::getline(std::cin, Data.noAbsen);

    write((size + 1), Data, file); // calling funtion wirte(posisi,Data yang akan di tulis, wadah file)
}

// Open File Function
void OpenTheData(std::fstream &file)
{
    file.open("Data_Siswa.bin", std::ios::out | std::ios::in | std::ios::binary); // Membuka file "Data_Siswa.txt"
    if (file.is_open())                                                           // jika file tidak di temukan
    {
        std::cout << "data di temukan" << std::endl;
    }
    else
    {
        std::cout << "Open File Gagal" << std::endl;
        std::cout << "File tidak di temukan" << std::endl;
        file.close(); // Menutup kembali file
        std::cout << "------" << std::endl;
        std::cout << "Membuat File baru" << std::endl;
        file.open("Data_Siswa.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary); // Membuka kembali flie dengan metode 'ios::truc' ini akan membuat file baru jika file tidak ada
        std::cout << "Berhasil!!!" << std::endl;
    }
}

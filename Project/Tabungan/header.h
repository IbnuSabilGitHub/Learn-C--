#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

struct Siswa
{
    int Point;
    std::string name;
    std::string Kelas;
    std::string jurusan;
    std::string noAbsen;
};


int Opsi ();
void write(int position, Siswa &buffer, std::fstream &file);
Siswa read( std::fstream &file,int position);
void OpenTheData(std::fstream &file);
void inputDataToFile(std::fstream &file);
int getSizeData(std::fstream &file);
#endif

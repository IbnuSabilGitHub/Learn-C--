#include <iostream>
#include <string>
#include <algorithm>
#include <array>
using namespace std;
string DataSeach;

void StringIndex();

int main()
{

    cout << "Nama Siswa = ";
    cin >> DataSeach;

    cout << endl;
    cout << "Out put string langsung = " << DataSeach << endl;

    cout << endl;


    cout << "Output string Index = ";
    StringIndex();

    cout << endl;

    return 0;
}

void StringIndex(){

    for(int i = 0; i < DataSeach.size();i++){
        cout << DataSeach [i];
    }
}
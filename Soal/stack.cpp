#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function print arr
void printArr(const vector<string> v)
{
    // for loop
    for (string value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> v = {"appel", "mangga", "ikan", "durian", "kucing", "anjing"};

    // Print Data

    printArr(v);

    // Hapus dua kali element terakhir
    v.pop_back();
    v.pop_back();

    // tambahkan element ke akhir
    v.push_back("anggur");
    v.push_back("pisang");

    // Print Data
    printArr(v);

    // Mengapus element ke 3 yaitu ikan
    v.at(2).erase();

    //  Menyisipkan element ke 3 yaitu alpukat
    v.insert(v.begin() + 2, "alpukat");

    // Print Data
    printArr(v);

    return 0;
}
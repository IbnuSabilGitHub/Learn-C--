#include<iostream>
#include<limits>
using namespace std;

// 1byte = 8 bit
// untuk tipe data 'int' memiliki 4byte yang berarti 32 bit jika 0 di belakang menjadi 31 bit
int main () {
    // tipe data bilangan bulat
    short a; // 2byte dan nilai maxsimun/minimum = (32767)/(-32768)

    // contoh 
    a = 6;

    int b; // 4byte dan nilai maxsimun/minimum = (2147483647)/(-2147483648)

    // contoh 
    b = 7;

    long c;

    // contoh 
    c = 7;

    // tipe data bilangan bulat ----- endd

    // Tipe data string(huruf)

    char d;

    d = 'a'; //1byte

    // Tipe data string(huruf)------endd

    // Tipe data bilangan desimal

    float e; // 4byte dan nilai maxsimun/minimum = (3.40282e+38)/(1.17549e-38)

    e = 0.5;

    // Tipe data bilangan desimal ----end

    // Tipe data relation expression

    bool f;

    f = b - c; 

    



    cout << f << endl;
    cout << sizeof(f) << "byte" << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;

    cin.get();
    return 0;
        
}
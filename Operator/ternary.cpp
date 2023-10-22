#include <iostream>
#include <string>
using namespace std;

int main()
{

    int UmurX, UmurY;
    string x, y, output;

    x = "Kakak";
    y = "Adik";
    cout << "Umur x =";
    cin >> UmurX;

    cout << "Umur y =";
    cin >> UmurY;

    output = (UmurX > UmurY) ? x : y;

    cout << output << endl;

    //  Jadi Operator (?) lebih simpel dan efesein dari if else

    //  output = (UmurX > UmurY) ? x : y;
    // |Variabel utk menimpan hasil | = |operator logika yang akan membandingkan kedua variabel atau yang  hasil nya bertipe data boolean| |operator ternary (?)| |kondisini pertama jika perbandingan bernilai true |  |:| |kondisi kedua jika perbandinagn bernilai false|
    return 0;
}
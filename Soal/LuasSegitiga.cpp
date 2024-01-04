#include <iostream>
using namespace std;

int LuasSegitiga(int a,int t){
    return 0.5 * a * t;
}

int main (){

    int alas,tinggi;

    cout << "Input Alas: ";
    cin >> alas;

    cout << "Input Tinggi: ";
    cin>> tinggi;

    int result = LuasSegitiga(alas,tinggi);

    cout << "Jadi Luas Segitiga ddengan alas " << alas << " cm " << "dan tinggi "<< tinggi << " cm adalah " << result << " cm^2" <<endl;

    return 0;
}

#include <iostream>
using namespace std;

int main () {

    int a, b;
    bool hasil;
    a = 10;
    b = 20;
    // not (!). {dimana jika hasil nya true di "not", maka hasil dari true akan mejadi 'false', begitu juga sebaliknya}

    cout << "not -------\n";
    hasil = !(a == 10); // ture = false
    cout << hasil << "false \n" << endl;

    // and (&&) >{ dimana jika hasil awal salah satu 'false' ataupun keduanya, maka hasil akan menjadi 'false' . nilai akan menjadi 'true,  jika niali awal kedua nya sama sama true}
    cout << "and ------- \n";
    hasil = (a == 10) and ( b == 20);   //true  && true =  true
    cout << hasil << "true" << endl;
    hasil = (a == 11) and ( b == 20);   //false && true =  false
    cout << hasil << "false" << endl;
    hasil = (a == 10) and ( b == 21);   //true  && false = false
    cout << hasil << "false" << endl;
    hasil = (a == 11) and ( b == 21);   //false && false = false
    cout << hasil << "false \n" << endl;

    // or (||) >{ dimana jika salah satu hasil awal true, hasil akan menjadi ture. hasil akan mejadi 'false' hanya jika hasil kedua nya flase}
    cout << "or ---------- \n";
    hasil = (a == 10) or ( b == 20);   //true  || true =  true
    cout << hasil << "true" << endl;
    hasil = (a == 11) or ( b == 20);   //false || true =  true
    cout << hasil << "true" << endl;
    hasil = (a == 10) or ( b == 21);   //true  || false = ture
    cout << hasil << "true" << endl;
    hasil = (a == 11) or ( b == 21);   //false || false = false
    cout << hasil << "false" << endl;

    return 0;

}
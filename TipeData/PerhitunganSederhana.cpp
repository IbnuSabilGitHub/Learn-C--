#include<iostream>
#include<limits>
using namespace std;

int main () {
    int A, B;
    cout <<"Masukan nilai A:";
    cin >> A;
    cout <<"Masukan nilai B:";
    cin >> B;
    int OK = A + B ;
    cout << A <<"+"<< B << "=" << OK << endl;
    cout << sizeof(OK) << "byte" << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;
    cin.get();
    return 0;
}
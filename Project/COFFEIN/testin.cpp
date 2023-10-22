#include <iostream>
#include <bitset>
#include<string>
using namespace std;

int main (){
    long x = 7000;
    string binary = bitset<32>(x).to_string();
    long desimal = bitset<32>(binary).to_ulong();
    cout << binary  << endl;
    cout << desimal << endl;

}
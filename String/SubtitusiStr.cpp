#include <iostream>
#include <string>
using namespace std;

int main () {

    string kalimat = {"Saya lagi belajar bahasa .... (HELO WORD) "};
    string answer;
    cout << "Anda lagi belajar bahasa apa ? : ";
    cin >> answer;

    cout << kalimat.replace(kalimat.find("."), 4, answer) <<endl;
}
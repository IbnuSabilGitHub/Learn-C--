#include <iostream>
#include <string>
using namespace std;

int main()
{

    string strOne = {"All conflict is self-conflict these things in which pain arises"};
    string strSearch;
    cout << "All conflict is self-conflict these things in which pain arises" << endl;
    cout << "Input Huruf yang ingin di cari = ";
    cin >> strSearch;

    int valueFind = strOne.find(strSearch);
    cout << strOne.substr(valueFind) << endl;

    int array [64];
    array[0] = strOne.find(strSearch);
    for (int i = 0; i < 5; i++)
    {
        cout << strOne.find(strSearch, array[i]+ 1) << endl;
    }

    return 0;
}
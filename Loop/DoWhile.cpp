#include <iostream>
using namespace std;

int main()
{
    // do
    // {
    // Aksi
    // } while (syarat);

    //
    // Hampir sama dengan while bedanya aksi akan di kalukan terlebih dahulu sebelum syarat
    int a;
    a = 10;


    cout << endl;
    do
    {
        cout << "Loop";
        cout << a << endl;
        a--;
    } while (a >= -10);

    cout << "END doWhile" << endl;

    return 0;
}
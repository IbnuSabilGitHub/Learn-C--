#include <iostream>
using namespace std;

int main()
{


    int b, c, hasil;
    b = 1;
    c = 20;
    hasil = 0;
    while (b != 50)
    {
        if (b > c)
        {
            hasil++;
        }
        else if (b < c)
        {
            hasil += 2;
        }
        cout << b << "||" << hasil <<endl;
        b++; 
    }
    cout << hasil << endl;

    return 0;
}
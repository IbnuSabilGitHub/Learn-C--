#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void Binary(unsigned short val, bool reverse)
{

    if (reverse == false)
    {
        cout << bitset<8>(val) << endl;
    }
    else
    {
        cout << "x       = " << bitset<8>(val) << "  =  " << val << endl;
    }
}

int main()
{

    cout << "----------Bitwise operations----------" << endl;
    cout << "&     AND   Bitwise AND \n"
            "|     OR    Bitwise inclusive OR \n"
            "^     XOR   Bitwise exclusive XOR \n"
            "~     NOT \n"
            "<<    SHL   Shift bits left SHL \n"
            ">>    SHR   Shift bits right SHR"
         << endl;

    unsigned short sample[2];
    unsigned short x;
    string op;

    for (int i = 0; i < 2; i++)
    {
        cout << "Sample" << (i + 1) << " : ";
        cin >> sample[i];
    }

    do
    {
        cout << "Bitwise operations : ";
        cin >> op;
    } while (op != "AND" && op != "OR" && op != "XOR" && op != "NOT" && op != "SHL" && op != "SHR");

    for (int i = 0; i < 2; i++)
    {
        cout << "Sample" << (i + 1) << " : ";
        Binary(sample[i], false);
    }

    if (op == "AND")
    {
        x = sample[0] & sample[1];
    }
    else if (op == "OR")
    {
        x = sample[0] | sample[1];
    }
    else if (op == "XOR")
    {
        x = sample[0] ^ sample[1];
    }
    else if(op == "NOT"){
        x = sample[0] != sample[1];
    }
    else if (op == "SHL")
    {
        x = sample[0] << sample[1];
    }
    else if (op == "SHR")
    {
        x = sample[0] >> sample[1];
    }

    Binary(x, true);

    return 0;
}

//  bitwise operations
//  &       AND  Bitwise AND
//  |         OR    Bitwise inclusive OR
//  ^        XOR  Bitwise exclusive XOR
//  ~       NOT
//  <<    SHL   Shift bits left SHL
//  >>    SHR   Shift bits right SHR
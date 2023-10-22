#include <iostream>
using namespace std;

int main()
{

    char arrayValue[9] = {'I', 'B', 'N', 'U', 'S', 'A', 'B', 'I', 'L'};

    for (char loopArray : arrayValue)
    {

        cout << "addresses: " << &loopArray << "value: " << loopArray << endl;
    }
    for (char loopArray : arrayValue)
    {

        cout << "addresses: " << &loopArray << "value: " << loopArray << endl;
    }

    return 0;
}
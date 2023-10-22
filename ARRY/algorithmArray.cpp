#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void number(array<int, arraySize> &num)
{

    for (int loop : num)
    {
        cout << loop << " ";
    }
}

void character(array<char, arraySize> &num)
{

    for (char loop : num)
    {
        cout << loop << " ";
    }
}

int main()
{

    array<int, arraySize> num = {2, 4, 5, 6, 8, 1, 7, 9, 0, 3};
    array<char, arraySize> str = {'v', 'e', 'f', 'a', 'y', 'h', 'i', 'd', 'q', 'w'};
    sort(num.begin(), num.end());
    sort(str.begin(), str.end());

    number(num);
    cout <<endl;
    character(str);

    return 0;
}
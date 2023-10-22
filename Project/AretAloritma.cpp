#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{

    array<int, 10> algorithmsArray = {9, 4, 2, 5, 1, 3, 2, 6, 8, 7};

    for (int i = 1; i < algorithmsArray.size(); i++)
    {
        cout << " * ";
    }
    sort(algorithmsArray.begin(), algorithmsArray.end());

    for (int i = 0; i <= 10; i++)
    {
        cout << "algorithmsArray[" << i << "] = " << algorithmsArray[i] << endl;
    }

    return 0;
}

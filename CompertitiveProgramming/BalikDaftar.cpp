#include <iostream>
using namespace std;

void printArrReverse(int arr[], int n)
{
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << endl;
    }
}

int main()
{

    int n = 100;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    

    printArrReverse(arr, n);

    return 0;
}

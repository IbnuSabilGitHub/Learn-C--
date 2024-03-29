#include <iostream>
using namespace std;

int RecursiveFunction(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        int nIsGenap = (n % 2 == 0) ? n / 2 : n;
        return nIsGenap * RecursiveFunction((n - 1));
    }
}

int main()
{
    int n;
    cin >> n;
    cout << RecursiveFunction(n) << endl;
    return 0;
}

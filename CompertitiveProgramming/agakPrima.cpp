#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isQuitePrimes(int num)
{
    int factor = 0;
    for (int i = 1; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            factor += (i == num/i) ? 1 : 2;
        }
    }

 
        return factor <= 4;

}

void quitePrimes(const vector<int> &v)
{
    for (int i : v)
    {
        if (isQuitePrimes(i))
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "BUKAN" << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    quitePrimes(num);
    return 0;
}
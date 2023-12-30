#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool sieveOfEratosthenes(int num)
{
    if (num < 2){
        return false;
    }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
    return true;
}

void primes(const vector<int> &v)
{
    for (int i : v)
    {
        if (sieveOfEratosthenes(i))
        {
            cout <<"IYA" << endl;
        }
        else
        {
            cout <<"BUKAN" << endl;
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

    primes(num);

    return 0;
}

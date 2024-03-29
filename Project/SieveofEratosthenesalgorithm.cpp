#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

void sieveOfEratosthenes(int n)
{
    bitset<500001> isPrime;
    vector<int> primes;

    isPrime.set();

    for (int p = 2; p <= n; ++p)
    {
        if (isPrime.test(p))
        {
            for (int i = p * p; i <= n; i += p)
            {
                isPrime.reset(i);
            }
            primes.push_back(p); 
        }
    }

    cout << "Prime numbers from 2 to " << n <<" are:\n";
    for (int prime : primes)
    {
        cout << prime << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    sieveOfEratosthenes(n);
    return 0;
}

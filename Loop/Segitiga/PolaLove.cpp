#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "masukan ke-n =";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // A
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        for (int o = 1; o < i; o++)
        {
            cout << "*";
        }
        // A end

        // B
        for (int h = n; h >= i; h--)
        {
            cout << " ";
        }
        for (int g = n; g >= i; g--)
        {
            cout << " ";
        }
        // B end

        // C end
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        for (int o = 1; o < i; o++)
        {
            cout << "*";
        }

        // C end

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int u = 1; u <= i; u++)
        {
            cout << " ";
        }
        for (int y = n; y >= i; y--)
        {
            cout << "*";
        }
        for (int t = n; t >= i; t--)
        {
            cout << "*";
        }
        for (int y = 1; y < i; y++)
        {
            cout << "*";
        }
        for (int t = 1; t < i; t++)
        {
            cout << "*";
        }
        for (int y = n; y > i; y--)
        {
            cout << "*";
        }
        for (int t = n; t > i; t--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int u = 1; u <= i; u++)
        {
            cout << " ";
        }
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int u = 1; u <= i; u++)
        {
            cout << " ";
        }

        for (int z = n; z > i; z--)
        {
            cout << "*";
        }
        for (int y = n; y > i; y--)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    return 0;
}
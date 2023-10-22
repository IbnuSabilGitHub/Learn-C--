#include <iostream>
using namespace std;

int main()
{

    int col, i, k;

    i = 1;

    cout << "Masukan ke-n =";
    cin >> col;

    cout << "Pola 1 \n";

    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 2 \n";
    for (int i = 1; i <= col; i++)
    {
        for (int j = col; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 3 \n";
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = col; k >= i; k--)
        {
            cout << '*';
        }

        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 4 \n";
    for (int i = 1; i <= col; i++)
    {
        for (int j = col; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }

        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 5 \n";
    for (int i = 1; i <= col; i++)
    {

        for (int j = col; j >= i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int o = 1; o < i; o++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "pola 6 \n";
    for (int i = 1; i <= col; i++)
    {

        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = col; k >= i; k--)
        {
            cout << "*";
        }
        for (int o = col; o > i; o--)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "pola 7 \n";
    for (int i = 1; i <= col; i++)
    {

        for (int j = col; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int o = 1; o < i; o++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= col; i++)
    {

        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = col; k >= i; k--)
        {
            cout << "*";
        }
        for (int o = col; o > i; o--)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "pola 8 \n";
    for (int i = 1; i <= col; i++)

    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= col; i++)

    {
        for (int k = col; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
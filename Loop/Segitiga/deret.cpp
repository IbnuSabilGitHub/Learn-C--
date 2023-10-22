#include <iostream>
using namespace std;

int main()
{

    int deret;

    cout << "Masukan deret =";
    cin >> deret;
    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 1 \n";
    for (int i = 1; i <= deret; i++)
    {

        for (int j = deret; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {

            cout << "*";
        }

        cout << endl;
    }

    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 2 \n";

    for (int i = 1; i <= deret; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = deret * 2; j > (2 * i - 1); j--)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << '\n'
         << '\n'
         << '\n';

    cout << "Pola 3 \n";

    for (int i = 1; i <= deret; i++)
    {

        for (int j = deret; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {

            cout << "*";
        }

        cout << endl;
    }
    for (int i = 1; i <= deret; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = deret * 2; j > (2 * i - 1); j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
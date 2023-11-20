#include <iostream>
using namespace std;

int main()
{

    int n;
    int count = 0;
    cout << "Masukan banyak nilai : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan angka ke-" << i << " : ";
        cin >> arr[i];
    }

    for (int empat : arr)
    {
        for (int tiga : arr)
        {
            for (int dua : arr)
            {
                for (int satu : arr)
                {
                    if (satu != 0)
                    {
                        cout << satu << dua << tiga << empat << endl;
                        count++;
                    }
                }
            }
        }
    }

    cout << "Terdapat " << count << " cara yang bisa di lakukan" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int n;
    int count = 0;
    cout << "Masukan banyak nilai : ";
    cin >> n;
    char arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan angka ke-" << i << " : ";
        cin >> arr[i];
    }

    for (char lima : arr)
    {
        for (char emapt : arr)
        {
            for (char tiga : arr)
            {
                for (char dua : arr)
                {
                    for (char satu : arr)
                    {
                        if (lima != emapt && emapt != tiga && tiga != dua && dua != satu)
                        {
                            cout << lima << emapt << tiga << dua << satu <<endl;
                            count ++;
                        }
                    }
                }
            }
        }
    }

    cout << "Terdapat " << count << " cara yang bisa di lakukan" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    // Rumus x = y + z
    // Rumus 5 = (n-1) + (n-2)
    // 1 1 2 3 5

    int n, i, x, y, z;
    cout << "Masukan Nilai N =";
    cin >> n;

    i = 0;
    x = 0;
    y = 1;
    z = 5;

    do
    {
        x = y + z;
        z = y;
        y = x;
        cout << x << " ";
        i++;
    }
    while (i < n);

    
}

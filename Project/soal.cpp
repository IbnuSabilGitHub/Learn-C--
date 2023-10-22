#include <iostream>
using namespace std;

int main()
{

    int jwb1, jwb2, jwb3;
    int hasil1, hasil2, hasil3;
    bool check1, check2, check3;

    hasil1 = 5 * 5;
    hasil2 = 5 + 5 * 5;
    hasil3 = (50 + 50) * 50;

    cout << "Berapakah hasil dari 5 * 5 =";
    cin >> jwb1;
    cout << "Berapakah hasil dari 5 * 5 =";
    cin >> jwb2;
    cout << "Berapakah hasil dari 5 * 5 =";
    cin >> jwb3;

    check1 = (jwb1 == hasil1);
    check2 = (jwb2 == hasil2);
    check3 = (jwb3 == hasil3);

    // Kondisi menujukan kesalahan input di nomer berapa

    // kondisi utk no 1
    if (check1)
    {
        cout << "NO 1 benar" << endl;
    }
    else
    {
        cout << "NO 1 Salah" << endl;
    }
    // kondisi utk no 1 -end

    // kondisi utk no 2
    if (check2)
    {
        cout << "NO 2 benar" << endl;
    }
    else
    {
        cout << "NO 2 Salah" << endl;
    }
    // kondisi utk no 2-end

    // kondisi utk no 3
    if (check3)
    {
        cout << "NO 3 benar" << endl;
    }
    else
    {
        cout << "NO 3 Salah" << endl;
    }
    // kondisi utk no 3-end


    // Kondisi menujukan kesalahan input di nomer berapa -------end

    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cout << hasil3 << endl;

    cin.get();
    return 0;
}
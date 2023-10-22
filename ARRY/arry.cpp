#include <iostream>
using namespace std;

int main()
{

    int Arry [10] {2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int x;
    cout << "Masukan data yang ingin anda cari berdasarakn(urutan bilangan genap dari 2-20) = ";
    cin >> x;

    cout << "Data yang anda cari adalah = " << Arry[x] << endl;
    return 0;
    
}
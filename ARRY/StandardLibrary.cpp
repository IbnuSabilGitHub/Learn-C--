#include <iostream>
#include <array>
using namespace std;

int main()
{
    // array<int, jumlah arry> nama array

    array<int, 10> value;

    for (int i = 0; i <= 10; i++)
    {
        value[i] = i;
        cout << "value[" << i << "] = " << value[1] << endl;
        cout << "address = " << &value[i] <<endl;

    }
    
    cout <<endl;

    cout << "size = " << value.size() << endl; // size of array
    cout << "address begin =" << value.begin() << endl; // address of array begin
    cout << "address end =" << value.end() << endl; // address of array end

    return 0;
}
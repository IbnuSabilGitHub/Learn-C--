#include <iostream>
using namespace std;

int x = 5;

int global()
{
    return x;
}

int main()
{
    cout << "1. Scope Global = " << x << endl;
    int x = 10;
    cout << "2. Scope Local = " << x << endl;
    cout << "3. Scope Global = " << global() << endl;
    {
        cout << "4. Scope global = " << x << endl;
        // scope block
        int x = 15;
        cout << "5. Scope local = " << x << endl;
        cout << "6. Scope local = " << global() << endl;
        
    }
    cout << "7. Scope local = " << x << endl;
    
}
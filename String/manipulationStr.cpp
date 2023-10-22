#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dataUser;

    string Password = ("Ibnu");

    cout << "Enter password : ";
    cin >> Password;
    for (int i = 0; i < 5; i++)
    {
        if (Password == "Ibnu")
        {
            cout << "Login successful!!!" << endl;
            break;
        }
        else
        {
            cout << "Password  Wrong" << endl;
            cout << "re-enter password "
                 << "(" << i << ") :";
            cin >> Password;
        }
    }
    cout << "Failed to login!!!" << endl;
    return 0;
}
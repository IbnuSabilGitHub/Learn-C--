#include <iostream>
#include <string>
using namespace std;

int main()
{

    string Variable;
    getline(cin, Variable);

    int countChar = 0.0;
    int position = 0.0;

    while (true)
    {
        position = Variable.find(" ", position + 1);
        countChar++;
        cout << "Position: " << position << endl;

        if (position < 0)
        {
            break;
        }
    }
    cout << "Count: " << countChar << endl;

    return 0;
}
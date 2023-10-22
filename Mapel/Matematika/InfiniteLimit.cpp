#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{

    int n;
    int val[n];
    int quad[n];
    char OperatorMath[n];

    for (int i = 0; i < 2; i++)
    {
        if (i = 0)
        {
            cout << "Input Pada Bagian Pembilang" << endl;
        }
        else
        {
            cout << "Input Pada Bagian Peyebut" << endl;
        }
        cout << "Suku F(x) = ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int checkPoint = 0;
            do
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (checkPoint == 3)
                {
                    cout << "Tolong input bilangan desimal saja" << endl;
                    checkPoint = 0;
                }
                cout << "Value Suku ke-" << (i + 1) << " = " << endl;
                cin >> val[i];
                checkPoint++;
            } while (cin.fail());
            int var;
            do
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "0.untuk bilangan yang memiliki variabel" << endl;
                cout << "1.untuk tidak" << endl;
                if (checkPoint == 3)
                {
                    cout << "Tolong input bilangan desimal saja" << endl;
                    checkPoint = 0;
                }
                cout << "Apakah Memiliki Variable ()" << (i + 1) << " = " << endl;
                cin >> var;
                checkPoint++;
            } while (var != 0 && var != 1);

            if (var == 0)
            {
                cout << "Pangkat Variable = " << endl;
                cin >> quad[i];
            }
            else
            {
                cout << "Eror" << endl;
                return 1;
            }

            do
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (checkPoint == 3)
                {
                    cout << "Tolong input bilangan desimal saja" << endl;
                    checkPoint = 0;
                }
                cout << "Operator" << (i + 1) << " = " << endl;
                cin >> OperatorMath;
                checkPoint++;
            } while (OperatorMath != "+" && OperatorMath != "-");
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if (i == 1)
        {
            cout << endl;
        }
        // for (int j = 0; j < nSuku; j++)
        // {
        //     cout <<
        // }
    }

    return 0;
}
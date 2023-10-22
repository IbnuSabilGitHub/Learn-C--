#include <iostream>
#include <cmath>
using namespace std;

double Limit(int lim, double c, double q, int t);

int main()
{

    int limit, function, term;

    cout << "Untuk F(x) polinominal input (1)" << endl;
    cout << endl;
    cout << "Masukan f(x) tipe apa yang anda punya = ";
    cin >> function;

    switch (function)
    {
    case 1:
    {
        cout << "Input  X → ";
        cin >> limit;

        cout << "Input F(x)" << endl;
        cout << "input suku (trem) polinominal = ";
        cin >> term;

        double value = 0.0;
        double output[term];
        double constanta[term + 1];
        for (int i = 1; i <= term; i++)
        {

            cout << endl;
            cout << "Input konstanta (Term ke " << i << ") =";
            cin >> constanta[i];
        }

        for (int i = 1; i <= term; i++)
        {

            if (i == (term))
            {
                value += constanta[i];
            }
            else
            {
                output[i] = constanta[i] * (pow(limit, i));
                value += output[i];
            }

            cout << "run " << i <<endl;
        }

        cout << value << endl;
        break;
    }

    default:
        break;
    }
    return 0;
}

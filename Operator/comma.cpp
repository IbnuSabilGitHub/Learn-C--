#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int quadrat(int x)
{
    return x * x;
}
int main()
{

    int a, b, c, x, A,B,C;
    cin >> A >> B >> C;
    // ini adalah operator COMMA
    x = (a = quadrat(A), cout << A << "^2 + ", b  = quadrat(B), cout << B << "^2 - ", c = C, cout << C <<endl, (sqrt(a + b - c)) );
    cout << x <<endl;;
    return 0;
}
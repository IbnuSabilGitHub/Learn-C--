#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    int matrix[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << endl;

    int matrixTransfrom[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = M-1; j >= 0; j--)
        {
            matrixTransfrom[i][j] = matrix[j][i];
            cout << matrixTransfrom[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}
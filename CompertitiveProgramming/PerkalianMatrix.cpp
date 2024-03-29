#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M, P;
loopInput:
    cin >> N >> M >> P;

    int matrix_A[N][M];
    int matrix_B[M][P];
    int matrix_C[N][P];

    // Input value matix A
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix_A[i][j];
        }
    }

    // input value matrix B
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cin >> matrix_B[i][j];
        }
    }

    // Inisialisaia value value matrix C dengan 0
    for (int i = 0; i < N; i++)
    {
        for (int j= 0; j < P; j++)
        {
            matrix_C[i][j] = 0;
        }
    }

    // N = 2, M = 3, N = 4
    for (int i = 0; i < N; i++) // Kolom
    { 
        for (int  j = 0; j < P; j++) // row
        {
            for (int k = 0; k < M; k++)
            {
                matrix_C[i][j] += (matrix_A[i][k]) * (matrix_B[k][j]);
            }
            
        }
    }


    // Print hasil
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
         cout << matrix_C[i][j] << " ";  
        }
        cout <<endl;
        
    }
    
    
    return 0;
}
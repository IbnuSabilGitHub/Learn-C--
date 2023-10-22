#include <iostream>
using namespace std;

void loopMatriks(int *ptrArray, int rows, int cols)
{
    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *ptrArray + index << " ";
            index++;
        }
        cout << endl;
    }
}

int main()
{
    int matriksArray[3][3] =
        {0, 1, 2,
         3, 4, 5,
         6, 8, 9};

    cout << "|" << matriksArray[2][2] << matriksArray[2][1] << matriksArray[2][0] << "|" << endl;
    cout << "|" << matriksArray[1][2] << matriksArray[1][1] << matriksArray[1][0] << "|" << endl;
    cout << "|" << matriksArray[0][2] << matriksArray[0][1] << matriksArray[0][0] << "|" << endl;

    loopMatriks(*matriksArray, 3, 3);

    return 0;
}
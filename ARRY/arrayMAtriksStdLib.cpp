#include <iostream>
#include <array>
using namespace std;

const int cols = 3;
const int rows = 3;

void printArray(array<array<int, cols>, rows> &valueMatrix){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << valueMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    array<array<int, cols>, rows> valueMatrix = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    printArray(valueMatrix);
    return 0;

    
}
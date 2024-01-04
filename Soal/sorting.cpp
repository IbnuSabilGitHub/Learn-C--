#include <iostream>
using namespace std;

// fungsi algoritma bubbleSort
void bubbleSort(int arr[],int lenght)
{
    // Forlop bersarang
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            // Jika j lebih besar dari j yang di tambahkan 1 maka tukar array
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    // deklarasi array yang belum di urutkan
    int arr[10] = {9, 5, 6, 7, 4, 2, 5, 6, 7, 1};
    // Mendapatkan size dari array
    int lenght = sizeof(arr) / sizeof(arr[0]);
    // Memanggil fungsi bubbleSort untuk mengurutkan value value arr
    bubbleSort(arr, lenght);

    // Print semua nilai dari array menggunakan forloop
    for (int value : arr)
    {
        cout << value << ", ";
    }
    return 0;
}
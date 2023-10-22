#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printArray(array<int, 10> numBook);


void line();

void DataBook(char value);

int main()


{

    cout << "Welcome to Library" << endl;
    line();
    cout << "Apa yang ingin anda lakukan : " << endl;
    char checkingBook;

    cout << endl
         << endl;

    cout << "Ingin Melakukan[y] | Tidak ingin melakukan[n]" << endl;

    do
    {
        cout << "Checking Book : ";
        cin >> checkingBook;
    } while (checkingBook != 'n' && checkingBook != 'y');

    if (checkingBook == 'y')
    {

        char valueUser;
        cout << "Search Your Book";
        cin >> valueUser;


    }

    array<int, 10> numBook = {3, 1, 2, 6, 5, 10, 4, 9, 8, 7};

    int BookNumber;
    bool check;

    cout << "Book search: ";
    cin >> BookNumber;
    ;

    sort(numBook.begin(), numBook.end());
    check = binary_search(numBook.begin(), numBook.end(), BookNumber);

    printArray(numBook);

    cout << endl;

    if (check)
    {

        cout << "Book found" << endl;
    }
    else
    {
        cout << "Book not found" << endl;
    }

    return 0;
}

void line()
{

    cout << "--------------------------------------------------------" << endl;
}

void printArray(array<int, 10> numBook)
{

    for (int loopArray : numBook)
    {
        cout << loopArray;
    }
}

void DataBook(char value)
{



    int cppLearn = 1;
    int JSLearn = 2;
    int webDev = 3;
    int htmlBook = 4;
    int cssBook = 5;
    int WebDevelopment = 6;
    int computer = 7;
    int softwareEngineer = 8;
    int network = 9;
    int pythonLearn = 10;

    array<int, 10> numBook = {cppLearn, 1, 2, 6, 5, 10, 4, 9, 8, 7};
}
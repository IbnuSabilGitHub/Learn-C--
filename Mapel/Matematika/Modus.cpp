#include <iostream>
using namespace std;
#define C = 5;

double Median(int n, double Min[], double frekuensi[], double Fk[]);
int ClassMedian(int n, double Fk[]);
double mean(double FiXi[], int n, double Xi[]);
double centerValue(int min, int max);
int fOptions();
int main()
{

    int n = 6;

    // cout << "Input Data ke-n : ";
    // cin >> n;
    double DataMin[n] = {1, 6, 11, 16, 21, 26};
    double DataMax[n] = {5, 10, 15, 20, 25, 30};
    double Frekunsi[n] = {4, 8, 12, 16, 11, 9};
    // cout << "Input Data" << endl;
    // for (int i = 0; i < n; i++)
    // {

    //     cout << "DataMin ke-" << i << " : ";
    //     cin >> DataMin[i];
    //     cout << "DataMax ke-" << i << " : ";
    //     cin >> DataMax[i];
    //     cout << "Frekunsi ke-" << i << " : ";
    //     cin >> Frekunsi[i];
    // }

    int options = fOptions(); // calling function for select options oprasi and masukan di dalam variabel

    double Xi[n];
    double FiXi[n];
    double Fk[n];

    for (int i = 0; i < n; i++)
    {
        Xi[i] = centerValue(DataMin[i], DataMax[i]);
        FiXi[i] = Frekunsi[i] * Xi[i];
        if (i < 1)
        {
            Fk[i] = Frekunsi[i];
        }
        else
        {
            Fk[i] = Fk[i - 1] + Frekunsi[i];
        }
    }

    enum optionsEnum // Mengbuah angka satu denga KATA
    {
        MEAN = 1,
        MODUS,
        MEDIAN
    };

    switch (options) // switch case untuk melakukan input sesuai input
    {
    case MEAN: // oprasiMean
    {
        cout << "Oprasi MEAN" << endl;
        double ValueMean = mean(FiXi, n, Xi);
        cout << "Jadi mean = " << ValueMean << endl;
        break;
    }

    case MODUS: // oprasi Modus
    {
        cout << "Oprasi MODUS" << endl;
        break;
    }

    case MEDIAN: // Oprasi Median
    {

        cout << "Oprasi MEDIAN" << endl;
        double ValueMedian = Median(n, DataMin, Frekunsi, Fk);
        int test = ClassMedian(n,Fk);
        cout << "Jadi Median = " << ValueMedian << endl;

        break;
    }

    default:
        break;
    }

    return 0;
}

double Median(int n, double Min[], double frekuensi[], double Fk[])
{
    int classMe = ClassMedian(n, Fk);
    double tb = Min[classMe] - 0.5;
    float valCenter = 0.5 * Fk[ n - 1];
    double FrekuensiClassBack = Fk[classMe - 1];
    double f = frekuensi[classMe];

    return tb + (((valCenter - FrekuensiClassBack) * 5) / f);
}

int ClassMedian(int n, double Fk[])
{
    double center = 0.5 * Fk[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (center < Fk[i])
        {
            return i;
        }
    }
    return 0;
}

double mean(double FiXi[], int n, double Xi[])
{
    double countFi = 0;
    double countXi = 0;

    for (int i = 0; i < n; i++)
    {
        countFi += FiXi[i];
        countXi += Xi[i];
    }
    return (countFi / countXi);
}

// function for center value
double centerValue(int min, int max)
{

    return (min + max) / 2;
}

// function for options
int fOptions()
{
    int x;
    system("clear");
    cout << "Pilih Oprasi yang akan di lakukan" << endl;
    cout << "1. Mean" << endl;
    cout << "2. Modus" << endl;
    cout << "3. Median" << endl;
    int count = 0;
    do
    {
        if (count > 1)
            cin.clear();
        if (count >= 5)
        {
            cout << "Hanya bisa Input angka 1,2,dan 3 salain itu input fail" << endl;
            count -= count;
        }
        cout << "Oprasi [1-3] : ";
        cin >> x;
        count++;
    } while (cin.fail() || x != 1 && x != 2 && x != 3);

    return x;
}

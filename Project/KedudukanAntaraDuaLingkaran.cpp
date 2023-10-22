#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
// Prototype
void garis();
void syaratKedudukanAntaraDuaLingkaran(double P1_P2, double R_plus, double R_minus);
void ValidasiInput();

double pusat(double x);
double radius(double a, double b, double c);
double p1_p2(double x1, double y1, double x2, double y2);
double RadiusTambah(double r1, double r2);
double RadiusKurang(double r1, double r2);
double gspd(double p2, double R_plus);
double gspl(double p2, double R_minus);
double jarakGspd(double gspd, double R_plus);
double jarakGspl(double gspl, double R_minus);

int main()
{
    // Rumus
    cout << "Input L1 :(pow(x, 2) + pow(y, 2) 'Input Nilai yang anda input') = 0" << endl;
    cout << endl;
    cout << "Input L1 :(pow(x, 2) + pow(y, 2) + Ax + By - C ) = 0" << endl;
    cout << "Input L2 :(pow(x, 2) + pow(y, 2) + Ax + By - C ) = 0" << endl;

    garis();

    double a1, b1, c1, a2, b2, c2; // Mendeklarasikan Variabel

    cout << "Peringatan : Input Koefisiennya saja " << endl;
    // Input L1
    cout << "Input L1 : " << endl;

    do
    {
        // input untuk Ax
        cout << "A = ";
        cin >> a1;
        ValidasiInput();
    } while (cin.fail()); // Memvalidasi input a1

    do
    {
        // Input untuk By
        cout << "B = ";
        cin >> b1;
        ValidasiInput();
    } while (cin.fail()); // Memvalidasi input b1

    do
    {
        // Input untuk C
        cout << "C = ";
        cin >> c1;
        ValidasiInput();
    } while (cin.fail()); // Memvalidasi input c1

    garis();

    // Input L2
    cout << "Input L2 : " << endl;
    do
    {
        // Input  Ax
        cout << "A = ";
        cin >> a2;
        ValidasiInput();
    } while (cin.fail()); // Memvalidasi input a2

    do
    {
        // Input By
        cout << "B = ";
        cin >> b2;
        ValidasiInput();
    } while (cin.fail()); // Memvalidasi input b2

    do
    {
        // Input C
        cout << "C = ";
        cin >> c2;
        ValidasiInput();
    } while (cin.fail()); // Memvalidasi input c2
    cout << endl;

    // l1
    double p1_1 = pusat(a1);        // x1
    double p1_2 = pusat(b1);        // y1
    double r1 = radius(a1, b1, c1); // r1

    // L2
    double p2_1 = pusat(a2);        // x2
    double p2_2 = pusat(b2);        // y2
    double r2 = radius(a2, b2, c2); // r2

    double pusat1_pusat2 = p1_p2(p1_1, p1_2, p2_1, p2_2); // function Jarak antara kedua titik pusat |p1 p2|

    double RadiusPlus = RadiusTambah(r1, r2);  // r1 + r2 =
    double RadiusMinus = RadiusKurang(r1, r2); // r1 - r2 =

    double GSPD = gspd(pusat1_pusat2, RadiusPlus);  // gspd
    double GSPL = gspl(pusat1_pusat2, RadiusMinus); // gspl

    double JarakGSPD = jarakGspd(GSPD,RadiusPlus );
    double JarakGSPL = jarakGspl(GSPL, RadiusMinus);

    garis();
    cout << "L1 : " << endl;
    cout << "Titik Pusat = (" << p1_1 << ", " << p1_2 << ")" << endl; // Output Titik Pusat L1
    cout << "Jari-Jari = " << r1 << endl;                             // Output Jari-Jari L1

    cout << endl;

    cout << "L2 : " << endl;
    cout << "Titik Pusat = (" << p2_1 << ", " << p2_2 << ")" << endl; // Output Titik Pusat L2
    cout << "Jari-Jari = " << r2 << endl;                             // Output Jari-Jari L2
    garis();

    cout << "Jarak antara kedua titik pusat |p1 p2| = " << pusat1_pusat2 << endl;
    cout << "r1 + r2 =" << RadiusPlus << endl;
    cout << "r1 - r2 = " << RadiusMinus << endl;
    garis();

    cout << "Garis Singung Kedua Lingkaran : " << endl;
    cout << "GSPD(Garis Singung Persekutuan Dalam) = " << GSPD << endl;
    cout << "GSPL(Garis Singung Persekutuan Lalam) = " << GSPL << endl;
    garis();

    cout << "Jarak antara dua lingkaran : " << endl;
    cout << "Jarak GSPD = " << JarakGSPD << endl;
    cout << "Jatuk GSPL = " << JarakGSPL << endl;
    garis();

    cout << "hubungan antara L1 dan L2 adalah ";
    syaratKedudukanAntaraDuaLingkaran(pusat1_pusat2, RadiusPlus, RadiusMinus);
    garis();

    return 0;

    // End of Menetukan Kedudukan Antara Dua Lingkaran program (11 Apr - 12 Apr 2023)
}
// Function untuk mencari pusat
double pusat(double x)
{
    return x /= -2;
}

// Function untuk mencari radius
double radius(double a, double b, double c)
{
    return sqrt((pow(pusat(a), 2) + pow(pusat(b), 2)) - c);
}

// Function |p1 p2|
double p1_p2(double x1, double y1, double x2, double y2)
{
    return sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
}

// Function (r1 + r2)
double RadiusTambah(double r1, double r2)
{
    return r1 + r2;
}

// Function (r1 - r2)
double RadiusKurang(double r1, double r2)
{
    return r1 - r2;
}

// Fungsi Garis Singgung Persekutuan Dalam
double gspd(double p2, double R_plus)
{

    return sqrt((pow(p2, 2)) - (pow(R_plus, 2)));
}

// Function Garis SInggung Persekutuan Luar
double gspl(double p2, double R_minus)
{

    return sqrt((pow(p2, 2)) - (pow(R_minus, 2)));
}

// Function untuk mencari jarak antara kedua lingkaran
double jarakGspd(double gspd, double R_plus)
{

    return sqrt((pow(R_plus, 2)) + (pow(gspd, 2)));
}

// Function untuk mencari jarak antara kedua lingkaran
double jarakGspl(double gspl, double R_minus)
{

    return sqrt((pow(R_minus, 2)) + (pow(gspl, 2)));
}
// Void function untuk menenturkan kondisi Kedudukan Antara Dua Lingkaran sesuai dengan syarat nya
void syaratKedudukanAntaraDuaLingkaran(double P1_P2, double R_plus, double R_minus)
{

    if (P1_P2 == 0) // Syarat = Jika P1 = P2 dan |p1 p2| = 0
    {
        cout << "Memiliki Pusat yang Sama" << endl;
        cout << "Jika P1 = P2 dan |p1 p2| = 0, maka L1 memiliki pusat yang sama dengan L2" << endl;
        garis();
    }
    else if (P1_P2 == R_minus) // Syarat = Jika |p1 p2| = (r1 - r2 )
    {
        cout << "Bersinggungan di dalam lingkaran" << endl;
        cout << "|p1 p2| = (r1 - r2 ), maka L1 dan L2 bersinggungan di dalam salah satu lingkaran." << endl;
        garis();
    }
    else if (P1_P2 <= R_minus) // Syarat = Jika |p1 p2| <= (r1 - r2)
    {
        cout << "Lingkaran kecil terletak di dalam lingkaran besar" << endl;
        cout << "|p1 p2| <= (r1 - r2) ,  maka L2 di dalam L1." << endl;
        garis();
    }
    else if (P1_P2 > R_minus && P1_P2 < R_plus) // Syarat = Jika (r1 - r2) < |p1 p2| < (r1 = r2)
    {
        cout << "Berpotongan di dua titik" << endl;
        cout << "(r1 - r2) < |p1 p2| < (r1 = r2), maka L1 berpotongan dengan L2 di dua titik." << endl;
        garis();
    }
    else if (P1_P2 == R_plus) // Syarat = Jika |p1 p2| = (r1 + r2 )
    {
        cout << "Bersinggungan di luar lingkaran (berpotongan di satu titik)" << endl;
        cout << "|p1 p2| = (r1 + r2 ), maka L1 dan L2 bersinggungan di luar lingkaran." << endl;
        garis();
    }
    else if (P1_P2 > R_plus) // Syart = Jika |p1 p2| > (r1 + r2)
    {
        cout << "Tidak Bersinggungan (Saling Lepas)" << endl;
        cout << "|p1 p2| > (r1 + r2), maka L1 dan L2 tidak bersinggugan." << endl;
        garis();
    }
}

// Void function untuk validasi
void ValidasiInput()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void garis()
{

    cout << "-----------------------------------------" << endl;
}
#include <iostream>
#include <boost/math/quadrature/simpson.hpp>
#include <boost/math/constants/constants.hpp>
using namespace std;
namespace bm = boost::math;

// Definisikan fungsi yang akan diintegrasikan
double myFunction(double x) {
    return x * x; // Misalnya, fungsi x^2
}

int main() {
    // Batas bawah dan atas integrasi
    double lower_limit = 0.0;
    double upper_limit = 1.0;

    // Jumlah iterasi metode Simpson
    int num_steps = 100;

    // Hitung hasil integrasi menggunakan metode Simpson
    double result = bm::quadrature::simpson(myFunction, lower_limit, upper_limit, num_steps);

    // Tampilkan hasil integrasi
    cout << "Hasil integrasi: " << result << endl;

    return 0;
}

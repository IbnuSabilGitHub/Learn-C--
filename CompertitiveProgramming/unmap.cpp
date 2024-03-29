#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Fungsi untuk menetapkan frekuensi ke dalam kelas atas dan bawah
unordered_map<string, int> hitungFrekuensiKelas(const vector<int>& data, int kelasAtas, int kelasBawah) {
    unordered_map<string, int> frekuensiKelas;
    
    // Iterasi melalui setiap nilai dalam data
    for (int nilai : data) {
        // Tentukan kelas
        string kelas;
        if (nilai >= kelasBawah && nilai < kelasAtas) {
            kelas = to_string(kelasBawah) + "-" + to_string(kelasAtas - 1);
        } else {
            kelas = "Luar Batas";
        }
        
        // Tambahkan frekuensi kelas
        frekuensiKelas[kelas]++;
    }
    
    return frekuensiKelas;
}

int main() {
    int x = 6;
    int y = 6;
    try
    {
        if(x == y){
            throw "salah";
        }
    }
    catch(const char* pesan)
    {
        cout << pesan <<endl;
    }
    
    
    return 0;
}

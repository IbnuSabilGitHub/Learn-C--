#include <iostream>
using namespace std;

long harga[10]{5000, 7000, 5000, 5000, 7000, 10000, 6000, 6000, 5000, 8000};

long num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

void info_harga();

void garis();

void thanks();

long hitung_harga(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j);

int main()
{
    char blnjYN;
    garis();
    info_harga();
    garis();
    cout << endl;

    cout << "Apakah anda ingin belanja ? (Input 'y' unutk ya, 'n' untuk no) : ";
    cin >> blnjYN;

    while (blnjYN != 'n' && blnjYN != 'y')
    {
        cout << endl;
        cout << "Input tidak vaild. TOLONG INPUT SESUAI SYARAT YANG TELAH DI TENTUKAN" << endl;
        garis();
        cout << "Apakah anda ingin belanja? (Input 'y' unutk ya, 'n' untuk no) : ";
        cin >> blnjYN;
    }

    if (blnjYN == 'y')
    {
        cout << endl;
        cout << "1. Teh Pucuk Harum " << harga[0] << " = ";
        cin >> num1;
        while (num1 >= 8)
        {
            cout << endl;
            cout << "Maaf!! untuk membeli Teh Pucuk Harum hanya di batasi 7 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 1  : ";
            cin >> num1;
        }

        cout << "2. Coffe Good Day " << harga[1] << " = ";
        cin >> num2;
        while (num2 >= 5)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Coffe Good Day hanya di batasi 4 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 2  : ";
            cin >> num2;
        }

        cout << "3. Teh Kotak " << harga[2] << " = ";
        cin >> num3;
        while (num4 >= 8)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Teh Kotak hanya di batasi 7 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 3  : ";
            cin >> num3;
        }

        cout << "4. Aqua " << harga[3] << " = ";
        cin >> num4;
        while (num4 >= 11)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Aqua hanya di batasi 10 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 4 ) : ";
            cin >> num4;
        }

        cout << "5. Coffe ABC " << harga[4] << " = ";
        cin >> num5;
        while (num5 >= 4)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Coffe ABC hanya di batasi 3 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 5  : ";
            cin >> num5;
        }

        cout << "6. Bobba " << harga[5] << " = ";
        cin >> num6;
        while (num6 >= 2)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Boba hanya di batasi 1 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 6  : ";
            cin >> num6;
        }

        cout << "7. Lesegar " << harga[6] << " = ";
        cin >> num7;
        while (num7 >= 6)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Lesegar hanya di batasi 4 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 7  : ";
            cin >> num7;
        }

        cout << "8. Chincau " << harga[7] << " = ";
        cin >> num8;
        while (num8 >= 4)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Chinchau hanya di batasi 3 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 8  : ";
            cin >> num8;
        }

        cout << "9. Kacang Ijo " << harga[8] << " = ";
        cin >> num9;
        while (num9 >= 11)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Coffe Good Day hanya di batasi 10 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 9  : ";
            cin >> num9;
        }

        cout << "10. Nescafe " << harga[9] << " = ";
        cin >> num10;
        while (num10 >= 3)
        {
            cout << endl;
            cout << "Maaf!! untuk membel Nescafe hanya di batasi 2 pembelian dalam 1 orang" << endl;
            cout << "Tolong input kembali jumlah item 10  : ";
            cin >> num10;
        }

        cout << endl;
        garis();
        cout << "Mencovirmasi Pembelian" << endl;
        cout << endl;
        cout << "Item Ke |"
             << "Harga         |"
             << "Jumlah pembelian |"
             << "Total     |" << endl;
        cout << "1.       " << harga[0] << "           " << num1 << "                 " << (num1 * harga[0]) << endl;
        cout << "2.       " << harga[1] << "           " << num2 << "                 " << (num2 * harga[1]) << endl;
        cout << "3.       " << harga[2] << "           " << num3 << "                 " << (num3 * harga[2]) << endl;
        cout << "4.       " << harga[3] << "           " << num4 << "                 " << (num4 * harga[3]) << endl;
        cout << "5.       " << harga[4] << "           " << num5 << "                 " << (num5 * harga[4]) << endl;
        cout << "6.       " << harga[5] << "          " << num6 << "                 " << (num6 * harga[5]) << endl;
        cout << "7.       " << harga[6] << "           " << num7 << "                 " << (num7 * harga[6]) << endl;
        cout << "8.       " << harga[7] << "           " << num8 << "                 " << (num8 * harga[7]) << endl;
        cout << "9.       " << harga[8] << "           " << num9 << "                 " << (num9 * harga[8]) << endl;
        cout << "10.      " << harga[9] << "           " << num10 << "                 " << (num10 * harga[9]) << endl;
        garis();
        cout << "Input 'y' jika setuju dengan pembelain, jika tidak input 'n'" << endl;
        cout << "Apakah anda Setuju dengan pembelian : ";
        cin >> blnjYN;

        while (blnjYN != 'y' && blnjYN != 'n')
        {
            cout << endl;
            cout << "Eror. Input tidak sesuai syarat yang di tentukan(Tolong input ulang)" << endl;
            cout << "Apakah anda Setuju dengan pembelian : ";
            cin >> blnjYN;
        }

        if (blnjYN == 'y')
        {
            long pembayaran;

            cout << endl;
            garis();
            cout << "Pembelian Telah di Konfirmasi !!!" << endl;
            cout << endl;
            long total = hitung_harga(num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
            cout << "Pembayaran : TOTAL HARGA = " << total << " Rp" << endl;
            garis();
            cout << endl;

            cout << "LAKUKAN PEMBAYARAN =";
            cin >> pembayaran;
            while (pembayaran < total)
            {
                cout << "Anda Membayar kurang dari " << total << endl;
		cout << "Pembayaran kurang : " << (total - pembayaran) << endl;
                cout << "Pembayaran : TOTAL HARGA = " << total << " Rp" << endl;

                cout << endl;
                cout << "LAKUKAN PEMBAYARAN =";
                cin >> pembayaran;
            }
            if (pembayaran >= total)
            {
                cout << endl;
                garis();
                long kembalian = pembayaran - total;

                cout << "PEMBAYARAN SUKSES !!! \n"
                     << "Dengan Pembayaran " << pembayaran << " dan kembalian " << kembalian << endl;
                garis();
                cout << endl;
                cout << endl;
                cout << "TERIMAKASIH TELAH BELANJA DI TOKO KAMI !!!" << endl;
            }
        }else if(blnjYN == 'n'){

            cout << "PEMBELIAN DI BATALKAN" <<endl;
        }
    }
    else if (blnjYN == 'n')
    {

        thanks();
    }

    return 0;
}

long hitung_harga(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j)
{

    a *= harga[0];
    b *= harga[1];
    c *= harga[2];
    d *= harga[3];
    e *= harga[4];
    f *= harga[5];
    g *= harga[6];
    h *= harga[7];
    i *= harga[8];
    j *= harga[9];

    return a + b + c + d + e + f + g + h + i + j;
}

void info_harga()
{

    cout << "1. Teh Pucuk Harum "
         << " = " << harga[0] << endl;
    cout << "2. Coffe Good Day "
         << " = " << harga[1] << endl;
    cout << "3. Teh Kotak "
         << " = " << harga[2] << endl;
    cout << "4. Aqua "
         << " = " << harga[3] << endl;
    cout << "5. Coffe ABC"
         << " = " << harga[4] << endl;
    cout << "6. Bobba "
         << " = " << harga[5] << endl;
    cout << "7. Lesegar "
         << " = " << harga[6] << endl;
    cout << "8. Chincau "
         << " = " << harga[7] << endl;
    cout << "9. Kacang Ijo "
         << " = " << harga[8] << endl;
    cout << "10. Nescafe "
         << " = " << harga[9] << endl;
}

void garis()
{

    cout << "------------------------------------------" << endl;
}

void thanks()
{

    cout << "TRIMAKASIH !!!" << endl;
}

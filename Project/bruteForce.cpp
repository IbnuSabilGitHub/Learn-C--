#include <iostream>
#include <array>
#include <string>
#include <limits>
#include <unistd.h>
using namespace std;

struct dataLoginUser
{
    string nickname = "spg Junior";
    string password = "ibnu";
    string email = "exsampelEmail@gmail.com";
    string signUpDate = "18/12/2023";
};

dataLoginUser dataUser;

int jumlahPercobaan = 0;
string bruteForce();
bool validasiPassword(string iptPw)
{
    jumlahPercobaan++;
    if (iptPw == dataUser.password)
    {
        cout << "Login Succeful" << endl;
        cout << "Melakukan " << jumlahPercobaan << " kali Percobaan" << endl;
        return true;
    }
    else
    {
        cout << "Masukan Password" << iptPw << endl;
        cout << "filed login" << endl;
        // sleep(0.5);
        cin.clear();
        return false;
    }
}

int main()
{

    string inputPassword;

    do
    {
        // cin >> inputPassword;
        cout << jumlahPercobaan << endl;
        inputPassword = bruteForce();
    } while (!validasiPassword(inputPassword));

    return 0;
}

string bruteForce()
{

    array<string, 36> arrChar = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z",
                                 "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};

    string seranganBrutal;

    for (string rowOne : arrChar) // satu
    {
        seranganBrutal = rowOne;
        if (validasiPassword(seranganBrutal))
        {
            return seranganBrutal;
        }
        else
        {
            seranganBrutal.clear();
        }
        for (string rowTwo : arrChar) // dua
        {
            seranganBrutal = rowOne + rowTwo;
            // cout << seranganBrutal << endl;
            if (validasiPassword(seranganBrutal))
            {
                return seranganBrutal;
            }
            else
            {
                seranganBrutal.clear();
            }

            for (string rowThree : arrChar) // tiga
            {
                seranganBrutal = rowOne + rowTwo + rowThree;
                if (validasiPassword(seranganBrutal))
                {
                    return seranganBrutal;
                }
                else
                {
                    seranganBrutal.clear();
                }
                for (string rowFour : arrChar) // empat
                {
                    seranganBrutal = rowOne + rowTwo + rowThree + rowFour;
                    if (validasiPassword(seranganBrutal))
                    {
                        return seranganBrutal;
                    }
                    else
                    {
                        seranganBrutal.clear();
                    }
                }
            }
        }
    }

    return "failedsss";
}

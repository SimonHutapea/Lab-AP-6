#include <iostream>
#include <string>
using namespace std;

int main() {
    int nim;
    system("cls");

    awal:
    do
    {
        cout << "Masukkan NIM anda : ";
        cin >> nim;
    } while (nim < 100000000 || nim > 300000000);

    // Menentukan Urutan NIM
    int urutan = nim % 1000;

    // Menentukan Urutan Stambuk
    int stambuk = nim / 10000000;

    // Menentukan Prodi
    string programStudi;
    int prodi = (nim % 100000) / 1000;

    // Menentukan Fakultas
    string fak;
    int fakultas = (nim % 10000000) / 100000;

    if (fakultas == 14)
    {
        fak = "Fasilkom-TI";
    } else
    {
        goto awal;
    }

    switch (prodi)
    {
    case 1:
        programStudi = "Ilmu Komputer";
        break;

    case 2:
        programStudi = "Teknologi Informasi";
        break;
    
    default:
        break;
    }

    cout << "Urutan anda adalah " << urutan << endl;
    cout << "Stambuk anda adalah " << stambuk << endl;
    cout << "Prodi anda adalah " << programStudi << endl;
    cout << "Fakultas anda adalah " << fak << endl;

    return 0;
}
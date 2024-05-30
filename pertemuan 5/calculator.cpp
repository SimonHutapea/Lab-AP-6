#include <iostream>
#include "calt.h" //untuk menghubungkan dengan file "calt.h"
using namespace std;

void menu(){
    cout << "============================" << endl;
    cout << "Selamat datang di kalkulator" << endl;
    cout << "============================" << endl;
    cout << "Daftar Operasi:" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Perpangkatan" << endl;
    cout << "============================" << endl;
}

int main(){
    system("cls");
    
    int operasi, a, b;
    float hasil;
    char jawab;

    do
    {
        menu();
        cout << "Masukkan operasi: ";
        cin >> operasi;

        cout << "Masukkan angka pertama: ";
        cin >> a;

        cout << "Masukkan angka kedua: ";
        cin >> b;

        switch (operasi)
        {
        case 1:
            hasil = tambah(a, b);
            break;
        
        case 2:
            hasil = kurang(a, b);
            break;

        case 3:
            hasil = kali(a, b);
            break;

        case 4:
            hasil = bagi(a, b);
            break;

        case 5:
            hasil = modulo(a, b);
            break;

        case 6:
            hasil = pangkat(a, b);
            break;
        
        default:
            break;
        }

        cout << "Hasil : " << hasil << endl;

        cout << "Apakah anda ingin melanjutkan? [Y/N]: ";
        cin >> jawab;
        jawab = toupper(jawab);
    } while (jawab == 'Y');
}
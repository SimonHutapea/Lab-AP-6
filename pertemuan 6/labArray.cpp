#include <iostream>
using namespace std;

int main() {system("cls");
    
    string nama2[5] = {"Andi", "Budi", "Sandi", "Wanto", "Densi"};

    for (int i = 0; i < 5; i++)
    {
        cout << nama2[i] << endl;
    }

    //Multidimensional Array
    int matriks[2][2] = {{1, 3}, {2, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    //String (Array of Characters)
    string nama = "Simon";
    for (int i = 0; i < nama.length(); i++)
    {
        cout << nama[i] << endl;
    }

    //Example 1
    int n;

    cout << "Masukkan banyak mahasiswa: ";
    cin >> n;

    float nilai[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Nilai mahasiswa ke-" << i + 1 << " adalah " << nilai[i] << endl;
    }

    //Example 2
    string nama_Karyawan[] = {"Andi", "Yusuf", "Budi", "Yanto", "Santi", "Dodi"};

    //sizeof() --> Berfungsi untuk mengecek ukuran suatu objek
    //n * sizeof(string) = sizeof(nama_Karyawan)
    //n = sizeof(nama_Karyawan) / sizeof(string)

    for (int i = 0; i < sizeof(nama_Karyawan) / sizeof(string); i++)
    {
        cout << nama_Karyawan[i] << endl;
    }
    
    //Example 3
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "Matriks 1" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Matriks 2" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
}
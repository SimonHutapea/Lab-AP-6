#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");

    //Vector Declaration and Initialization
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto"};

    //Accessing Element in Vector
    for (int i = 0; i < nama.size(); i++)
    {
        cout << nama[i] << endl;
    }

    cout << endl;

    //For Each Looping
    for (string mhs : nama)
    {
        cout << mhs << endl;
    }

    cout << endl;

    //Adding Data to Vector
    nama.push_back("Wawan");

    //Deleting Data from Vector
    nama.pop_back(); // pop_back() --> Menghapus data paling akhir
    nama.erase(nama.begin()); // erase() --> Menghapus data
    nama.erase(nama.begin() + 1); // nama.begin() --> Untuk mendapatkan data paling awal

    for (int i = 0; i < nama.size(); i++)
    {
        cout << nama[i] << endl;
    }
}
#include <iostream>
#include <array>
using namespace std;

int main() {
    system("cls");

    array<string, 5> nama = {"Andi", "Budi", "Santi", "Wanto"};

    //For Each Looping
    for (string mhs : nama)
    {
        cout << mhs << endl;
    }

    cout << nama.size() << endl;
}
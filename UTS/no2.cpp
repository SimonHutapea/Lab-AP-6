#include <iostream>
using namespace std;

int main() {
    int n,jumlah;

    cout << "Masukkan angka : ";
    cin >> n;

    while (n != 0)
    {
        jumlah += n %10;
        n /= 10;
    }
    
    cout << "Jumlah : " << jumlah;
}
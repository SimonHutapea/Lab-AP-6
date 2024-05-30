#include <iostream>
#include <string>
using namespace std;

int main() {
    int nilai;

    system("cls");
    cout << "Masukkan nilai : ";
    cin >> nilai;

    //Ternary Operation
    (nilai > 0) ? cout << "Positif\n" : cout<< "Negatif\n";
    string tipe = (nilai > 0) ? "Positif\n" : "Negatif\n";
    cout << tipe;

    // if (nilai > 0 and nilai < 65) {
    //     cout << "Tidak Lulus\n";
    // } else if (nilai == 65) {
    //     cout << "Lulus dengan nilai pas\n";
    // } else if (nilai > 65 and nilai < 100) {
    //     cout << "Lulus\n";
    // } else {
    //     cout << "Tolong Masukkan nilai diantara 0 - 100\n";
    // }

    // if (nilai < 0 || nilai > 100)
    // {
    //     cout << "Tidak Valid\n";
    // } else if (nilai < 65) {
    //     cout << "Tidak Lulus\n";
    // } else if (nilai == 65) {
    //     cout << "Lulus dengan nilai pas\n";
    // } else if (nilai > 65) {
    //     cout << "Lulus\n";
    // }
    
    // switch (nilai)
    // {
    // case 1:
    //     cout << "Senin\n";
    //     break;
    // case 2:
    //     cout << "Selasa\n";
    //     break;
    // case 3:
    //     cout << "Rabu\n";
    //     break;
    // case 4:
    //     cout << "Kamis\n";
    //     break;
    // case 5:
    //     cout << "Jumat\n";
    //     break;
    // case 6:
    //     cout << "Sabtu\n";
    //     break;
    // case 7:
    //     cout << "Minggu\n";
    //     break;
    // default:
    //     cout << "Tidak Valid\n";
    //     break;
    // }

    // switch (nilai)
    // {
    // case 95 ... 100:
    //     cout << "A+\n";
    //     break;
    // case 90 ... 94:
    //     cout << "A\n";
    //     break;
    // case 85 ... 89:
    //     cout << "B+\n";
    //     break;
    // case 80 ... 84:
    //     cout << "B\n";
    //     break;
    // case 75 ... 79:
    //     cout << "C+\n";
    //     break;
    // case 70 ... 74:
    //     cout << "C\n";
    //     break;
    // case 60 ... 69:
    //     cout << "D\n";
    //     break;
    // case 0 ... 59:
    //     cout << "E\n";
    //     break;
    // default:
    //     cout << "Tidak Valid\n";
    //     break;
    // }

    system("pause");
}
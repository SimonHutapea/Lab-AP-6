#include <iostream>
using namespace std;

int penjumlahan(int a, int b) {
    return a + b;
}

void berjumlah(int a, int b) {
    a += b;
    cout << a << endl;
}

int main(){
    system("cls");

    int number = 16;
    int *ptrnumber = &number; //Membuat 'ptrnumber' menunjuk langsung nilai lain yang tersimpan di tempat lain dalam memori komputer menggunakan alamat dari 'number'

    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat variabel number : " << &number << endl;
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl;

    //Pointer Operation
    *ptrnumber = 37;
    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat variabel number : " << &number << endl;
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl;

    //Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int* ptrnum = num;
    cout << "Isi variabel num indeks 0 = " << num[0] << endl;
    cout << "Alamat memori variabel num indeks 0 = " << &num[0] << endl;
    cout << "Alamat memori variabel num indeks 1 = " << &num[1] << endl;
    cout << "Isi variabel ptrnum = " << ptrnum << endl;
    cout << "Isi variabel yang ditunjuk oleh ptrnumber = " << *ptrnum << endl;

    //Pointer as Parameter
    int a = 2;
    int b = 3;
    berjumlah(a, b);
    cout << penjumlahan(a, b) << endl;
    cout << a << endl;

    //Pointer to Pointer
    int n = 4;
    int* ptrn = &n;
    int** ptr_ptrn = &ptrn;

    cout << "Isi variabel n = " << n << endl;
    cout << "Alamat variabel n = " << &n << endl;
    cout << "Isi variabel ptrn = " << ptrn << endl;
    cout << "Isi variabel yang ditunjuk ptrn = " << *ptrn << endl;
    cout << "Alamat variabel ptrn = " << &ptrn << endl;
    cout << "Isi variabel ptr_ptrn = " << ptr_ptrn << endl;
    cout << "Isi variabel yang ditunjuk ptr_ptrn = " << **ptr_ptrn << endl;
    cout << "Alamat variabel ptr_ptrn = " << &ptr_ptrn << endl;

    //Dynamic Pointer
    int* ptr1 = new int; //Memory Allocation
    *ptr1 = 24;
    cout << "Isi variabel ptr = " << ptr1 << endl;
    cout << "Data yang ada di variabel ptr = " << *ptr1 << endl;
    delete ptr1; //Diallocation
    cout << "Isi variabel ptr = " << ptr1 << endl;
    cout << "Data yang ada di variabel ptr = " << *ptr1 << endl;
}
#include <iostream>
using namespace std;

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
void sayHello(string name);
void garis();
void bintang();

int main () {
    system("cls");

    sayHello("Simon");
    garis();
    bintang();
    cout << tambah(2,3) << endl;
    cout << kurang(2,3) << endl;
    cout << kali(2,3) << endl;
    cout << bagi(2,3) << endl;
    
    return 0;
}

    //Function -> Subprogram yang memiliki nilai kembalian
    int tambah(int a, int b) {
        return a + b;
    }

    int kurang(int a, int b) {
        return a - b;
    }

    int kali(int a, int b) {
        return a * b;
    }

    float bagi(int a, int b) {
        //return (float)a / (float)b; //Type Casting
        return static_cast<float>(a) / static_cast<float>(b); //Type Casting
    }

    //Procedure -> Subprogram yang tidak memiliki nilai kembalian
    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }

    void garis() {
        cout << "==========" << endl;
    }

    void bintang() {
        cout << "**********" << endl;
    }

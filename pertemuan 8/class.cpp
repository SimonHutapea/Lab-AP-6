#include <iostream>
using namespace std;

class Mahasiswa {
    //Access Modifier
    private:
        string nama, nim;
        float nilai;
    
    //Access Modifier
    public:
        //Constructor Method
        Mahasiswa(string nama, string nim, float nilai) {
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        //Getter Method
        string getNama() {
            return this->nama;
        }

        string getNim() {
            return this->nim;
        }

        float getNilai() {
            return this->nilai;
        }

        void display() {
            cout << "Nama   : " << this->nama << endl;
            cout << "Nim    : " << this->nim << endl;
            cout << "Nilai  : " << this->nilai << endl;
        }
};

int main() {
    system("cls");
    
    Mahasiswa mhs("Andi", "231401001", 87.2); //Instantiation
    mhs.display();

    cout << mhs.getNama() << endl;
    cout << mhs.getNim() << endl;
    cout << mhs.getNilai() << endl;
}
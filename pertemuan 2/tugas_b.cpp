#include <iostream>
using namespace std;

int main() {
    float a,t,tl,lp,vol;

    cout << "Masukkan alas : ";
    cin >> a;
    cout << "Masukkan tinggi : ";
    cin >> t;
    cout << "Masukkan tinggi limas : ";
    cin >> tl;
    lp = (1/2.0 * a * t) + (3 * 1/2.0 * a * tl);
    vol = (1/3.0) * (1/2.0 * a * t * tl);
    cout << "Luas permukaan adalah :" << lp << endl;
    cout << "Volume : " << vol << endl;
}
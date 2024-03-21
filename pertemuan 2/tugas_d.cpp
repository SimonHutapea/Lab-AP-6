#include <iostream>
using namespace std;

int main() {
    float a,t,tp,lp,vol;

    cout << "Masukkan alas : ";
    cin >> a;
    cout << "Masukkan tinggi : ";
    cin >> t;
    cout << "Masukkan tinggi prisma : ";
    cin >> tp;
    lp = (2 * (1/2.0) * a * t) + (a * 3 * tp);
    vol = (1/2.0) * a * t * tp;
    cout << "Luas permukaan adalah :" << lp << endl;
    cout << "Volume : " << vol << endl;
}
// Transfer Parameter By Address/Location
// Yang dikirim ke fungsi lain adalah alamat (l-value)

#include<iostream>

using namespace std;

void hitung(int x, int y, int *p, int *q) {
   *p = x + y;
   *q = x * y;
}

int main() {
    int x, y, p, q;

    cout << "masukan angka x:" << endl;
    cin >> x;
    cout << "masukan angka y:" << endl;
    cin >> y;

    hitung(x, y, &p, &q);  
   
    cout << "x + y = " << p << endl;
    cout << "x * y = " << q; 
   
   return 0;
}
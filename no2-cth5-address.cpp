// Transfer Parameter By Address/Location
// Yang dikirim ke fungsi lain adalah alamat (l-value)

#include<iostream>

using namespace std;

void hitung(int x, int y, int *p, int *q) {
   *p = x + y;
   *q = x * y;
}

int main() {
   int x = 10, y = 5, p, q;
   hitung(x, y, &p, &q);  
   // menggunakan alamat p dan q (&p dan &q) tanpa diulang, hanya mengirimkan alamatnya saja
   // dan langsung memasukkan valuenya ketika function selesai dijalankan.
   
   cout << "x + y = " << p << endl;
   cout << "x * y = " << q; 
   
   return 0;
}

// Output:
// x + y = 15
// x * y = 50
#include <iostream>

using namespace std;

int *fungsi(int *p) {
    int i, im , m = 0;              // inisialisasi variabel i, im, dan m
    for(i=0; i<5; i++)              // looping sebanyak 5x
        if (*(p+i)>m) {             // if untuk memeriksa jika parameter p > m
            m = *(p+i);             // jika parameter p > m, maka parameter p akan tersalin oleh m
            im = i;                 // im menyimpan index parameter p yang memenuhi syarat (lebih besar daripada m)
        }
    return(p+im);                   // value yang di-return berupa alamat memori yang bergerak terhadap indexnya.
}

int main() {
    int a[] = {20, 40, 10, 50, 30};         // inisialisasi array
    int *ptr;                               // inisialisasi pointer
    ptr = fungsi(a);                        // mengakses fungsi(a)
    cout << " m = " << *ptr;                // menampilkan nilai m
    
    return 0;
}
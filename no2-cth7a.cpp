#include<iostream>

using namespace std;

void swap( int &a, int &b) {            // fungsi swap menggunakan reference (alamat value)
    int temp;                           // temp sebagai tipe data
    temp = a;                           // nilai temp = nilai a
    a = b;                              // nilai a = nilai b
    b = temp;                           // nilai b = nilai temp
}

int main() {
    int x=4, y=8;
    swap(x,y);                          // swap mengubah nilai x dan y
    cout << x << " " << y << endl;
    
    return 0;
}

// Output:
// 8 4
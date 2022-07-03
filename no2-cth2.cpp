#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int v = 3;
    int *pv = &v;

    cout << "*pv = " << *pv << ", v = " << v << endl;

    *pv = 0; 
    // value *pv diubah menjadi 0, sehingga secara otomatis v-nya menjadi 0 juga
    cout << "*pv = " << *pv << ", v = " << v << endl;
    return 0;
}

// Output:
// *pv = 3, v = 3
// *pv = 0, v = 0
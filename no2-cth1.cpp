#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int u1, u2, v = 3;
    int *pv;    // pointer menampung nilai v

    u1 = 2 * (v + 5);
    pv = &v;    // &v = alamat v
    u2 = 2 * (*pv + 5);     // *pv = nilai v

    cout << "u1 = " << u1 << ", ";
    cout << "u2 = " << u2 << endl;
    cout << "pv = " << pv << endl;

    return 0;
}

// Output:
// u1 = 16, u2 = 16
// pv = 0x7fff180e7304
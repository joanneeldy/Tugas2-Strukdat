#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int h, j, n = 18;
    int *pn;                    // pointer menampung nilai n

    h = 28 / (n - (-8));
    pn = &n;    // &n = alamat n
    j = 28 / (*pn - (-8));      // *pn = nilai n

    if (j == 1) {
        cout << "benar, karena h = " << setprecision(2) << h << ", ";
        cout << "j = " << setprecision(2) << j << endl;
        cout << "pn = " << setprecision(2) << pn << endl;
    }
    else {
        cout << "salah, seharusnya h = " << setprecision(2) << h << ", ";
        cout << "j = " << setprecision(2) << j << endl;
        cout << "pn = " << setprecision(2) << pn << endl;
    }

    return 0;
}
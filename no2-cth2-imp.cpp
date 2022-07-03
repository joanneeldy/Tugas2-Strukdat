#include <iostream>

using namespace std;

int main() {
    float j = 28;
    float *ph = &j;

    cout << "*ph = " << *ph << ", j = " << j << endl;

    *ph = 0; 
    // value *ph diubah menjadi 0, sehingga secara otomatis j-nya menjadi 0 juga

    if (*ph == 0) {
        cout << "benar, karena *ph = " << *ph << ", j = " << j << endl;
    }
    else {
        cout << "salah, seharusnya *ph != " << *ph << ", j != " << j << endl;
    }
    
    return 0;
}
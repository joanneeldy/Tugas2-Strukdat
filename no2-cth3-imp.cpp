#include <iostream>

using namespace std;

int main() {
    int h = 3, j;
    int *ph, *pj;

    ph = &h;
    j = *ph;
    pj = &j;

    if (*pj == 3) {
        cout << "benar, karena h=" << h << ", &h=" << &h << ", ph=" << ph << ", *ph=" << *ph << endl;
        cout << "dan j=" << j << ", &j=" << &j << ", pj=" << pj << ", *pj=" << *pj << endl; 
    }
    else {
        cout << "salah, h=" << h << ", &h=" << &h << ", ph=" << ph << ", *ph=" << *ph << endl;
        cout << "dan j=" << j << ", &j=" << &j << ", pj=" << pj << ", *pj=" << *pj << endl; 
    }

    return 0;
}
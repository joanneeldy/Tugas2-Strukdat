#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int u = 3, v;
    int *pu, *pv;

    pu = &u;
    v = *pu;
    pv = &v;

// value akan tetap sama, namun alamatnya berbeda. 
// karena yang diambil oleh v adalah value u, bukan alamat u

    cout << "u=" << u << ", &u=" << &u << ", pu=" << pu << ", *pu" << *pu << endl;
    cout << "v=" << v << ", &v=" << &v << ", pv=" << pv << ", *pv" << *pv << endl; 
    
    return 0;
}

// Output:
// u=3, &u=0x7ffcbb0410e0, pu=0x7ffcbb0410e0, *pu3
// v=3, &v=0x7ffcbb0410e4, pv=0x7ffcbb0410e4, *pv3
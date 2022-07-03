#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main() {
    int j = 18;                                      // value dari j
    cout << "j: \t" << j << endl;                    // memunculkan value *pj
    cout << "Alamat variabel j: " << endl;           
    cout << "\t" << &j << endl;                      // memunculkan alamat variabel dari j
    
    int *pj;                                         // membuat pointer dengan nama pj
    *pj = 8;                                         // value dari *pj
    cout << "\n*pj: \t" << *pj << endl;              // memunculkan value *pj
    cout << "Alamat variabel pj: " << endl;
    cout << "\t" << pj << endl;                      // memunculkan alamat dari pj
    
    pj = &j;                                         // alamat pj menyalin (copy) alamat j (menyalin alamat maka value akan ikut terubah)
    cout << "\n*pj: \t" << *pj << endl;                // memunculkan value terbaru pj (sama dengan j)
    cout << "Alamat variabel pj: " <<endl;
    cout << "\t" << pj << endl;                      // memunculkan alamat terbaru dari pj (sama dengan j)
    
    *pj = 5;
    cout << "\nj: \t" << j << endl;                    // memunculkan value j (yang valuenya telah terubah)
    cout << "Alamat variabel j: " <<endl;
    cout << "\t" << &j << endl;                      // memunculkan alamat dari j
                                                     // alamatnya masih sama karena alamat pj menyalin alamat j
    
    getch();
    return 0;
};
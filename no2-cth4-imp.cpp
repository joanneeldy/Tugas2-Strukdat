// Transfer Parameter By Value
// yang dikirim ke fungsi lain merupakan nilai data (r-value)

#include <iostream>

using namespace std;

int number;

void tambah(char h) {
   int i;
   for(i=1; i<=number; i++) 
	    cout << h;
}

int main() {
    cout << "masukan angka" << endl;
    cin >> number;
    char j = '+';
    tambah( j );
   
return 0;
}
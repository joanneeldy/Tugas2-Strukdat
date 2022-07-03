// Transfer Parameter By Value
// yang dikirim ke fungsi lain merupakan nilai data (r-value)

#include <iostream>

using namespace std;

void garis(char x) {
   int i;
   for(i=1; i<=10; i++) 
	    cout << x;
}

int main() {
   char c = '-';
   garis( c );
   
   return 0;
}

// Output:
// ----------
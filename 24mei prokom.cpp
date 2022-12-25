#include <iostream>
using namespace std;

int main () {
   int x,y;
   cout << "loop will begin at: ";
   cin >> x;
   cout << "loop will end at: ";
   cin >> y;
   for( int a = x; a < y+1; a = a + 1 ) {
      cout << "value of a: " << a << endl;
   }

   return 0;
}

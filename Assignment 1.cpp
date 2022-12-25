/*increasing star
figure 1
*/
#include <iostream>
using namespace std;

int main () {
   int x;

   for( int x = 1 ; x < 12  ;x += 2 ) {
      for( int i = 0; i < x; i++){
        cout << "*";
      }cout << "\n";
   }
   return 0;
}

/*triangle ascending
figure 3
*/

#include <iostream>
using namespace std;

int main () {
   int a;

   for( int a = 1; a < 12; a = a + 2 ) {
      for( int i = 0; i < (12-a)/2; i = i + 1){
        cout << " ";
      }
      for( int i = 0; i < a; i = i + 1){
        cout << "*";
      }cout << "\n";
   }
   return 0;
}

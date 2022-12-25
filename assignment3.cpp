/*diamond shaped
figure 5
*/

#include <iostream>
using namespace std;

int main () {
   int a;

   for( int a = 1; a < 12; a = a + 2 ) {
      for( int i = 1; i < 12-a-1; i = i + 2){
        cout << " ";
      }
      for( int i = 0; i < a; i = i + 1){
        cout << "*";
      }cout << "\n";
   }

   for( int a = 9; a > 0; a = a - 2 ) {
        for( int i = 9-a+1; i > 0; i = i-2){
            cout << " ";
        }
      for( int i = a; i > 0; i = i - 1){
        cout << "*";
      }cout << "\n";
   }
   return 0;
}






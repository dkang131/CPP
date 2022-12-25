/*triangle decreasing
figure 4
*/

#include <iostream>
using namespace std;

int main (){
   for( int a = 11; a > 0; a = a - 2 ) {
        for( int i = (11-a)/2; i > 0; i = i -1){
            cout << " ";
        }
      for( int i = a; i > 0; i = i - 1){
        cout << "*";
      }cout << "\n";
   }
   return 0;
}


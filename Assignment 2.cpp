/*decreasing star
figure 2
*/
#include <iostream>
using namespace std;

int main () {
   int x;

    for (int x = 11; x > 0 ; x -= 2){
        for (int i=0; i<x; i++){
            cout << "*";
        }cout << "\n";
   }
   return 0;
}

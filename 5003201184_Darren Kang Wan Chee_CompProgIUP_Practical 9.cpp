//dikumpulkan

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int i,x;
    cout << "x: ";
    cin >> x;
    for(i=0;i<x;i++){
        cout << pow(3,i)<<" ";
    }
    return 0;
}
//=============================================
//number 1
int main () {
   int x;

   for( int x = 1 ; x < 12  ;x += 2 ) {
      for( int i = 0; i < x; i++){
        cout << "*";
      }cout << "\n";
   }
   return 0;
}
//============================================
//number 2

int main () {
   int x;

    for (int x = 11; x > 0 ; x -= 2){
        for (int i=0; i<x; i++){
            cout << "*";
        }cout << "\n";
   }
   return 0;
}
//==============================================
//number 3

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
//=============================================
//number 4

int main(){
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
//=============================================
//number 5

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

//================================================
//number 6

int main()
{
    int n=6;
    int i, j;

    for(i=0; i<=n; i++){
        for(j=0; j<=n-i; j++)
            cout << " ";
        for(j=1; j<=i; j++)
            cout << j;
        for(j=i-1; j>0; j--)
            cout << j;
        cout << endl;
    }

    for(i=n-1; i>0; i--){
        for(j=0; j<=n-i; j++)
            cout << " ";
        for(j=1; j<=i; j++)
           cout << j;
        for(j=i-1; j>0; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
   int num;
   /* Nested if statement. An if statement
    * inside another if body
    */
   cout<<"Enter an integer number : ";
   cin>>num;
   if( num < 100 ){
      cout<<"number is less than 100"<<endl;
      if(num > 50){
         cout<<"and number is greater than 50";
      }
   }
   else if (num > 100){
   cout<<"number is greater than 100"<<endl;
   if (num > 150 && num < 200) {
   	cout << "and number is greater than 150 and less than 200";
   }
   }

   return 0;
}


#include <iostream>
using namespace std;

/*
int factorial1(int n){
    int i,factorial1=1;
    for(i=1;i<=n;i++)
        factorial1 = factorial1*i;

    return factorial1;
}

int factorial2(int a){
    int result;
    if(a>1)
      result = a*factorial2(a-1);
    else
        result =1;
    return result;
}


int combination(int x, int y){
    return(factorial1(x)/(factorial1(y)*factorial1(x-y)));
}

int main(){
    int x,y;
    cout << "Enter factorial number to calculate: ";
    cin >> x;
    //cout << x << "! :" << factorial1(x)<<endl;
    cout << x << "! = " << factorial2(x)<<endl;
    cout << "Enter another factorial number to calculate: ";
    cin >> y;
    cout << y << "! = " << factorial2(y)<<endl;

    cout << "The combination of "<< x << " and " << y << " is : " << (factorial2(x)/(factorial2(y)*factorial2(x-y)));
    return 0;

}

*/

float new_mean(float x,float n,float y){
    int mean=0;
    mean = (x+y)/n;

    return ((mean*n)+x)/(n+1);

}


int main(){

    cout << new_mean(61,2,70);
}

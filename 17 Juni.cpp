
#include <bits/stdc++.h>

using namespace std;

/*
int fibonacci(int n){
    if(n>2)
        return fibonacci(n-1)+fibonacci(n-2);
    else
        return 1;
}

int main(){
    cout << fibonacci(4)<<"\n";

    for(int i=1;i<=10;i++)
        cout << fibonacci(i)<<" , ";


}
*/


int main(){
    int i,j;
    int n=6;
    float ye;
    float jum=0;

    for(i=1;i<=n;i++){
        float deret=0;
            for(j=1;j<=i;j++){
                deret += j;
                ye=1/deret;
            }
        cout <<fixed << setprecision(3)<< ye << endl;
        jum = jum+ye;
    }
    cout << fixed << setprecision(3)<<jum;
}


/*
int main(){
    int i;
    int n=6;

    for(i=0;i<n;i++)
        cout << pow(-3,i)<<" , ";
}
*/

/*
int main(){
    int i,j,k;

    for(i=10;i>0;i--){
        cout << i << " ";
    }cout << endl;

    for(j=1;j<=10;j++){
        cout << j*10 << " ";
        for(k=1;k<=j;k++){
            cout << k << " ";
        }
        cout << endl;
    }

}
*/

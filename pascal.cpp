#include <iostream>

using namespace std;

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

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x[5] = {0.05, 0.1, 0.2, 0.3, 0.4};
    float data;
    int i, k, n1, n2, c, A, B, C;

    cin >> n1 >> n2; //n1 = start, n2 = stop

    cout << x[0];
    for(i=1; i<5; i++)
        cout << "\t" << x[i];
    cout << endl << "-------------------------------------" << endl; //untuk tabel

    while(n1 <= n2){
        for(i=0; i<1; i++){
            for(c=0; c<n1+1; c++){
                for(int j=0; j<5; j++){

                    //combination
                    A=1;    //A=n!
                    B=1;    //B=r!
                    C=1;    //c=(n-r)!

                    //finding n!, r!, (n-r)!
                    for(k=n1; k>0; k--)
                        A = A*k;
                    for(k=c; k>0; k--)
                        B = B*k;
                    for(k=n1-c; k>0; k--)
                        C = C*k;

                    //formula
                    data = A/(B*C)*pow(x[j],c)*pow((1-x[j]),(n1-c));
                    cout << fixed << setprecision(3) << data << "\t";
                }
                cout << endl;
            }
            cout << endl;
        }
        n1++;
    }

    return 0;
}




#include <iostream>
using namespace std;

int main(){

    double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, sum[3][3];
    double matrix2[3][3]={0};
    int i, j, m=3, n=3;

    cout << "This is your first matrix :" <<endl;
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "\t";
          }
          cout << endl;
        }

    //transpose of matrix
    for(i=0; i<m; i++)
        for(j=0; j<m; j++)
            matrix2[i][j]={matrix1[j][i]};

    //display transpose
    cout << "This is transpose of matrix1 : \n";
    for(i=0; i<m; i++){
        for(j=0; j<m; j++)
            cout << matrix2[i][j] << "\t";

        cout << endl;
    }
    return 0;
}

//===============================================
//rata rata

int main(){

    int i,sum=0;
    int a[5]={1,2,3,4,5};

    for(i=0; i<5; i++)
        sum = sum + a[i];

    int rata=sum/5;

    cout << rata << endl;

    return 0;
}

//=================================
//rata rata via input

int main(){

    double a[1000];
    int i,n;

    cout << "Berapa banyak n dalam array tersebut: ";
    cin >> n;
    for(i=0; i<n; i++){
        cout << "Masukkan data ke " << i << ": ";
        cin >> a[i];
    }

    float sum=0;
    for(i=0; i<n; i++){
        sum += a[i];
    }

    float rata=sum/n;
    cout << rata;

    return 0;
}

//=====================================================
//determinan matrix


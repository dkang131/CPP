#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
/*
int main()
{
    double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, sum[3][3];
    int i, j, m=3, n=3;


    cout << "This is your first matrix :" <<endl;
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "\t";
          }
          cout << endl;
        }

    // Adding Two matrices
    for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
            sum[i][j] = matrix1[i][j] + matrix1[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
        	{
            cout << sum[i][j] << "  \t";
            if(j == n - 1)
                cout << endl;
        	}

    return 0;
}*/

/*
int main()
{
    double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, result[3][3],sum;
    int i, j, k, m=3, n=3, p, q;


    cout << "This is your first matrix :" <<endl;
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "  \t";
          }
          cout << endl;
        }

    sum = 0;
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            for(k = 0; k < m; k++){
              //cout << "=======================>> " <<matrix1[i][k] <<" times " <<matrix1[k][j] <<endl;
            sum = sum + matrix1[i][k] * matrix1[k][j];
              //cout << "=======================>> " <<sum <<endl;
            }
            //getch();
            result[i][j] = sum;
            sum = 0;
          }
        }


    cout << "Multiplication result : \n";
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cout << result[i][j] << "  \t";
                matrix1[i][j]=result[i][j];
          }
          cout << endl;
        }
*/

    int main()
	{
      double matrix1[3][3]={{0.1,0.5,0.4},{0.8,0.1,0.1},{0.7,0.2,0.1}}, result[3][3],sum;
      int i, j, k, m=3, n=3, p, q;


        cout << "This is your matrix :" <<endl;
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << matrix1[i][j] << "\t";
          }
          cout << endl;
        }

       int run_num = 0;
        do {
		sum = 0;
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            for(k = 0; k < m; k++){
              //cout << "=======================>> " <<matrix1[i][k] <<" kali " <<matrix1[k][j] <<endl;
			  sum = sum + matrix1[i][k] * matrix1[k][j];
              //cout << "=======================>> " <<sum <<endl;
            }
            //getch();
            result[i][j] = sum;
            sum = 0;
          }
        }
        //run_num++;
        cout << "The "<<run_num++ <<"th - Multiplication result: \n";
        for(i = 0; i < m; i++){
          for(j = 0; j < m; j++){
            cout << result[i][j] << "  \t";
            matrix1[i][j]=result[i][j];
          }
          cout << endl;
        }

        cout<<"\n\nControl value check \n";
        cout<<matrix1[0][0] <<"\n";
		cout<<matrix1[1][0] <<"\n";
		cout<<matrix1[0][0]-matrix1[1][0] <<"\n\n";
    } while ((matrix1[0][0]-matrix1[1][0])>0.0000001);
      return 0;
    }




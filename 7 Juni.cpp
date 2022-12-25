#include <iostream>
#include <cmath>
using namespace std;

int addition(int a, int b)
{int r;
    r=a+b;
    return r;
}

int substraction(int a,int b)
{
    int r;
    r=a-b;
    return r;
}

int main(){

    int z;

    c
    z = addition(a,b);

    cout << "The result is: " << z << "\n";

    z = substraction(a,b);

    cout << "The result is: " << z << "\n";

    return 0;
}

//===================================================================


#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>      // std::setprecision
#include <math.h>
using namespace std;

double Uniform (double a, double b)
{
   double u, Unif;
   u = rand()%100;
   Unif = (b-a) * u/100 + a;
   return Unif;
}

double MeanData (double x[100], int k){
    double sum=0,mean;
    int l;
    for(l=0;l<k;l++){
        sum += x[l];
    }
    mean = sum/k;

    return mean;
}

double VarData(double c[100],double average, int k){
    double sqdiff=0;
    for(int i=0;i<k;i++)
        sqdiff += (c[i]- average)*(c[i]-average);

    return sqdiff/(k-1);
}

int main(){

    int i,N,x,y;
    double data[100],average,variance;

  /* initialize random seed: */
    srand (time(NULL));
    cout << "Enter number of random number you generated : ";
    cin >> N;

    cout << "Enter the range from: ";
    cin >> x;

    cout << "Enter the range ends at: ";
    cin >> y;

    cout << "Here is your "<< N << " random number U(x,y) that you want to generate. \n";
	for (i=0;i<N;i++)
	{
     data[i]= Uniform(x,y);
	 cout << data[i] <<endl;
	}
    average=MeanData(data,N);
    variance=VarData(data,average,N);
    cout << "\n\n The average of " <<N<< " between " << x << " and " << y<< " is " << average;

    cout << "\n\n The variance of is: " << variance;

    return 0;
}

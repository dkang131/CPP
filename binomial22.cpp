#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>      // std::setprecision
#include <math.h>
using namespace std;

long faktorial(long a){
	if(a>0){
		return (a*faktorial(a-1));
		}
	else{
		return 1;
	}

}

long kombinasi(long n, long k){
	return(faktorial(n)/(faktorial(k)*faktorial(n-k)));
}

float  perpangkatan(float a, float b){
	if(b>0){
		return (a*perpangkatan(a, b-1));}
	else{
		return 1;
	}
}

float binomial(int n, int k,float p){
	float result = 1;
	//1*p^k
	for(int i = 1; i<=k; i++){
	result = result * p;
	}
	//1*p^k*(1-p)^(n-k)
	for(int i = 1; i<=n-k; i++){
	result = result * (1-p);
	}
	//1*p^k*(1-p)^(n-k)*kombinasi(n,k)
	result = result * kombinasi(n,k);
	return result;
	}

float binomial2(int n, int k, float p){
	return(kombinasi(n,k)*perpangkatan(p,k)*perpangkatan((1-p),(n-k)));
}

int main(){
	int n = 4;
	float binomiali[4];
	int k1 = 1;
	int k2 = 0;
	float p = 0.1;
	cout<<"binomial = "<<binomial(n,k1,p)<<"\n";
	cout<<"binomial = "<<binomial2(n,k2,p)<<"\n";
	cout<<"binomial = "<<binomial2(n,k1,p)+binomial2(n,k2,p)<<"\n";
	float jumlah = 0;
	for(int k=0;k<=n;k++){
		jumlah += binomial2(n,k,p);
		binomiali[k]=jumlah;
	}
	for(int k=0;k<=n;k++){
		cout<<binomiali[k]<<endl;
	}
}

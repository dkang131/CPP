#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

	int pil;
	float e,a,b,c,d,inv[3][3],k[3][3],adj[3][3],det,det1;
	cout<<"==========Mencari Invers Matriks=========="<<endl;
	cout<<"Kode Matriks:"<<endl;
	cout<<"1. Matriks berordo 2x2"<<endl;
	cout<<"2. Matriks berordo 3x3"<<endl;
	cout<<"Masukkan kode matriks yang ingin anda cari inversnya: ";
	cin>>pil;
	cout<<endl;

	if (pil==1)
	{
			cout<<"Mencari Invers Matriks matriks A berordo 2x2"<<endl;
			int A[2][2];
			cout<<"Input Elemen Matriks A"<<endl;
			for(int i=0; i<2; i++)
			{
				for(int j=0; j<2; j++)
				{
				cout<<i+1<<","<<j+1<<" ---> ";
				cin>>A[i][j];
				}
			}
			cout<<endl;
			cout<<"Matriks A berordo 2x2"<<endl;
			for(int i=0; i<2; i++)
			{
				for(int j=0; j<2; j++)
				{
				cout<<A[i][j]<<"\t";
				}
				cout<<endl;
			}
		cout<<endl;
		det=(((A[0][0])*(A[1][1]))-((A[0][1])*(A[1][0])));
		cout<<"Hasil nilai determinan matriks A berordo 2x2 adalah: "<<det<<endl;
		cout<<endl;
		e=1/det;
		a=e*(A[1][1]);
		b=e*(-(A[0][1]));
		c=e*(-(A[1][0]));
		d=e*(A[0][0]);
		cout<<"Invers matriks A berordo 2x2 adalah: "<<det<<endl;
		cout<<a<<"\t"<<b<<endl;
		cout<<c<<"\t"<<d<<endl;
	}
	else{
			cout<<"Menghitung nilai determinan matriks B berordo 3x3"<<endl;
			int B[3][3];
			cout<<"Input Elemen Matriks B"<<endl;
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
				cout<<i+1<<","<<j+1<<" ---> ";cin>>B[i][j];
				}
			}
			cout<<endl;
			cout<<"Matriks B berordo 3x3"<<endl;
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
				cout<<B[i][j]<<"\t";
				}
				cout<<endl;
			}
		cout<<endl;
		det1 = 0;
		for(int i =0; i<3;i++){
		det1= det1 + (B[0][i] * (B[1][(i+1)%3] * B[2][(i+2)%3] - B[1][(i+2)%3] * B[2][(i+1)%3]));
		}cout<<"Hasil nilai determinan matriks B berordo 3x3 adalah: "<<det1<<endl;
		cout<<"Adjoin Matriks B:"<<endl;
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			adj[i][j]=((B[(j+1)%3][(i+1)%3] * B[(j+2)%3][(i+2)%3]) - (B[(j+1)%3][(i+2)%3] * B[(j+2)%3][(i+1)%3]));
}}
		cout<<endl;
		for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
				cout<<adj[i][j]<<"\t";
				}
				cout<<endl;
			}
		cout<<endl;
		cout<<"Invers matriks B berordo 3x3 adalah: "<<endl;
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
				inv[i][j]=(1/det1)*adj[i][j];
				cout<<inv[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
	}

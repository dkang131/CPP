#include <fstream>
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;
int main()
{
    int j,k,awal,lagi,lagi2;
    float x[100][2],y[100][1],transposex[2][100],xtx[2][2],xty[2][1],detxtx,adj[2][2],inversxtx[2][2],b0b1[2][1];
    string sign[100], sign2[100], Dt_stringline[100];
    char filenameIN[20],filenameOUT[20];
    float data1,data2, Dt_list[100][2],fits[100];
    int N,i=0;
	double totalx=0,totaly=0,ratax,ratay,varx=0,vary=0,kor=0,stx,sty,rxy,b1,b0;
    int eof();

    // input filename to be opened
    cout << " Enter input data filename to be opened ";
	cin >> filenameIN;
	//Open a file in read mode
    ifstream infile;
    //specified a file name to be open
    infile.open(filenameIN);
	if (!infile.is_open()){
    	cout << "\n\n\n File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.\n\n\n\n";
		return(0);
	} else {
	       // input filename to be opened
           cout << " Enter output data filename to be written ";
	       cin >> filenameOUT;
	}

    cout << endl << ">= Open and read file " << endl << "\n";
    //if the file exist then
    if (infile.is_open())
    {
        //reapeating reading string data from file
        while ( !infile.eof())
        {
            infile >> data1 >> data2;
			//print data to the screen and save it in an Array Dt_stringline
            cout << data1 <<"  "<< data2 << '\n';
            Dt_list[i][1]=data1;
            Dt_list[i][2]=data2;
            i++;
        }
        //close the file after all of line data have been read
        infile.close();
    }
    //if the file does not exist then show this comment
    else {
    	cout << "File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.";
	}
    N=i;
    float n = N;
    for(int i=0;i<n;i++){
		 x[i][1]=Dt_list[i][1];
		 x[i][0]=1;
		 y[i][0]=Dt_list[i][2];
	}
    cout<<endl<<endl<<"matriks x:"<<endl;
    for (i=0;i<n;i++)                                                                                           //output matriks x//
    {
        for(j=0;j<2;j++)
        {
            cout<<x[i][j]<<"\t";
        } cout<<endl;
    }
    cout<<endl<<endl<<"matriks y:"<<endl;
  for (i=0;i<n;i++)                                                                                             //output matriks y//
    {
        for(j=0;j<1;j++)
        {
            cout<<y[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<n;i++)                                                                                            //transpose matriks x//
    {
        for(j=0;j<2;j++)
        {
            transposex[j][i]=x[i][j];
        }
    }
    cout<<endl<<endl<<"transpose matriks x:"<<endl;
      for (i=0;i<2;i++)                                                                                         //output matriks x//
    {
        for(j=0;j<n;j++)
        {
            cout<<transposex[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                            //perkalian matriks x dengan transposenya//
    {
        for(j=0;j<2;j++)
        {
            xtx[i][j]=0;
            for(k=0;k<n;k++)
            {
                xtx[i][j]+=(transposex[i][k]*x[k][j]);
            }
        }
    }
    cout<<endl<<"XtX:"<<endl;
     for (i=0;i<2;i++)                                                                                          //output matriks x dikali transposenya//
    {
        for(j=0;j<2;j++)
        {
            cout<<xtx[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    detxtx=xtx[0][0]*xtx[1][1]-xtx[0][1]*xtx[1][0];                                                             //determinan XtX//
    cout<<endl<<endl<<"det xtx :"<<detxtx<<endl<<endl;                                                          //output determinan XtX//
    adj[0][0]=xtx[1][1];                                                                                        //adjoin matriks XtX//
    adj[1][1]=xtx[0][0];
    adj[0][1]=-1*xtx[0][1];
    adj[1][0]=-1*xtx[1][0];
    cout<<endl<<endl<<"adjoin matriks xtx:"<<endl;
    for (i=0;i<2;i++)                                                                                           //output adjoin//
    {
        for(j=0;j<2;j++)
        {
            cout<<adj[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                            //Invers matriks XtX//
    {
        for(j=0;j<2;j++)
        {
            inversxtx[i][j]=(1/detxtx)*adj[i][j];
        }
    }
    cout<<endl<<endl<<"invers matriks xtx:"<<endl;                                                              //output matriks Invers XtX//
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<inversxtx[i][j]<<"\t";
        } cout<<endl;
    } cout<<endl;
     for(i=0;i<2;i++)                                                                                           //Perkalian matriks X tranpose dengan y//
    {
            xty[i][0]=0;
            for(j=0;j<n;j++)
            {
                xty[i][0]+=(transposex[i][j]*y[j][0]);
            }
    }
    cout<<endl<<endl<<"matriks xty:"<<endl;                                                                     //Output perkalian matriks X tranpose dengan Y//
    for(i=0;i<2;i++)
    {
        cout<<xty[i][0]<<endl;
    } cout<<endl;
    for(i=0;i<2;i++)                                                                                            //Perkalian pencarian hasil//
    {
        b0b1[i][0]=0;
        for(j=0;j<2;j++)
        {
            b0b1[i][0]+=inversxtx[i][j]*xty[j][0];
        }
    }
	cout<<endl<<endl<<"matriks b0b1:"<<endl;                                                                    //Output hasil b0b1//
    for(i=0;i<2;i++)
    {
        cout<<b0b1[i][0]<<endl;
    }
    cout << "Predicted Yields: "<<endl;
    for(int i=0;i<n;i++){
        fits[i]=b0b1[0][0]+b0b1[1][0]*x[i][1];
        cout << fits[i] << " ";
    }
    cout<<endl;
    cout<<"Results"<<endl;
    cout<<"x \t y \t\t Predicted Value";
    cout<<endl;

    for(int i=0;i<n;i++){
        if(y[i][0]>fits[i]){
            sign[i]="Over";
            sign2[i]="Keep or Sell";
        }
        else{
            sign[i]="Lower";
            sign2[i]="Keep";
        }


    cout <<"x \t Code \t y \t Predicted Value \t Over/Lower \t\t Investmet Advice";
    for(int i=0;i<n;i++){
        cout<<x[i][1]<<" \t"<<y[i][0]<<" \t"<<fits[i]<<" \t"<<sign[i]<<" \t"<<sign2[i]<<endl;
    }
        }
    }


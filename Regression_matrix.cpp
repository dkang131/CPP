#include <iostream>                                                                                         //Muhammad Rofiqul Ilmi (06211740000087//
#include <conio.h>
#include <math.h>
#include <fstream>>
using namespace std;
int main()
{
    int j,k,awal,lagi,lagi2;
    int n;
    char filenameIN[20],filenameOUT[20];
    float x[100][2],y[100][1],transpose[2][100],stx=0,sty=0,jumx=0,jumy=0,ratax,ratay, sx,sy,zt[100][100],ztz[100][100],z[100][100];
    float data1, data2, Dt_list[100][2];
    int N,i=0;
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
    else{
    	cout << "File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.";
	}
    N=i;
    float n = N; //Perubahan int ke float
	for(int i=0;i<n;i++){
        x[i][1]=Dt_list[i][1];
        x[i][0]=1;
        y[i][0]=Dt_list[i][2];
	}
	cout << endl << endl <<"matriks x:";



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

    float ysum=0;
    for(i=0;i<n;i++)
    {
        ysum+=y[i][0];
    }

    float ybar=ysum/n;

    float SSR=0;

    for(i=0;i<n;i++)
    {
        SSR+=pow(((b0b1[0][0]+b0b1[1][0]*x[i][1])-ybar),2);
    }

    float SST=0;

    for(i=0;i<n;i++)
    {
        SST+=pow((y[i][0]-ybar),2);
    }

    float SSE=SST-SSR;

    float MSR=SSR;
    float MSE=SSE/(n-2);
    float fhit=MSR/MSE;

    float dfr=1;
    float dfe=n-2;
    float dft=n-1;

    float SEcoeffb0=sqrt(inversxtx[0][0]*MSE);
    float SEcoeffb1=sqrt(inversxtx[1][1]*MSE);

    float thitb0=b0b1[0][0]/SEcoeffb0;
    float thitb1=b0b1[1][0]/SEcoeffb1;



    cout<<endl<<endl;
    cout<<endl<<"SSR\t:"<<SSR;
    cout<<endl<<"SSE\t:"<<SSE;
    cout<<endl<<"SST\t:"<<SST;
    cout<<endl<<"dfr\t:"<<dfr;
    cout<<endl<<"dfe\t:"<<dfe;
    cout<<endl<<"dft\t:"<<dft;
    cout<<endl<<"MSR\t:"<<MSR;
    cout<<endl<<"MSE\t:"<<MSE;
    cout<<endl<<"f hitung\t:"<<fhit;
    cout<<endl<<endl;
    cout<<endl<<"memasukan ftabel\t:";
    float ftabel;
    cin>>ftabel;

    if(fhit>ftabel)
    {
        cout<<endl<<"T hitung b0\t:"<<thitb0;
        cout<<endl<<"T hitung b1\t:"<<thitb1;
        float ttabel;
        cout<<endl<<"tolak H0";
        cout<<endl<<"masukan nilai t tabel\t:";
        cin>>ttabel;
        if(thitb0>ttabel && thitb1>ttabel)
        {
            cout<<endl<<"b0 dan b1 signifikan";
        }
        else if(thitb0>ttabel)
        {
            cout<<endl<<"b0 signifikan";
        }
        else
        {
            cout<<endl<<"b1 signifikan";
        }
    }
    else
    {
        cout<<endl<<"Gagal tolak H0";
    }



    cout<<endl<<endl<<"matriks b0b1:"<<endl;                                                                    //Output hasil b0b1//
    for(i=0;i<2;i++)
    {
        cout<<b0b1[i][0]<<endl;
    }
    cout<<endl<<"Regresi linearnya sebagai berikut :"<<endl<<"y="<<b0b1[0][0]<<"+"<<b0b1[1][0]<<"x";
    cout<<endl<<endl<<"Maka setiap penambahan prediktor sebanyak satu satuan maka respon akan "<<b0b1[1][0]<<" kali prediktor dan ditambah "<<b0b1[0][0]<<endl;
    cout<<endl<<"Apakah anda ingin mengulang analisis dengan data baru?";                          //Program pengulangan analisa regresi linier sederhana//
    cout<<endl<<"Masukan (1) untuk lanjut dan (2) untuk berhenti";
    lagi2:
    cin>>lagi;
    if (lagi==1)
    {
        cout<<endl;
        goto awal;
    }
    else if (lagi==2)
    {
        cout<<endl<<"Terima kasih telah menggunakan program analisa regresi linear sederhana berikut ini";
    }
    else
    {
        cout<<"maaf ulangi untuk mengisi (1) atau (2)";
        goto lagi2;
    }
    cout<<endl;

    getch();
}

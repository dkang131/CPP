#include <fstream>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main () {
    //string stringline, Dt_stringline[100];
    char filenameIN[20],filenameOUT[20];
    int data1, data2, Dt_list[100][2],N,i=0;
	float x[100],y[100],stx=0,sty=0,jumx=0,jumy=0,ratax,ratay, sx,sy,zt[100][100],ztz[100][100],z[100][100];
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
    float n = (N); //Perubahan int ke float
	for(int i=0;i<n;i++){
		 x[i]=Dt_list[i][1];
		jumx += x[i];
		 y[i]=Dt_list[i][2];
		jumy += y[i];
	}
	ratax = jumx/n;
	ratay = jumy/n;
	cout<<"rata rata x = "<<ratax<<endl;
	cout<<"rata rata y = "<<ratay<<endl;
	cout<<"================================================================================"<<endl;
	for(int i=0;i<n;i++){
		stx += ((x[i]-ratax)*(x[i]-ratax)); //pow((x[i]-ratax),2)
		sty += ((y[i]-ratay)*(y[i]-ratay));
	}
	sx = sqrt(stx/(n-1));
	sy = sqrt(sty/(n-1));

	for(int i=0;i<n;i++){
			z[i][0] = (x[i]-ratax)/sx;
			z[i][1] = (y[i]-ratay)/sy;
		}
	cout<<"Matriks Transpose (x-rata(x)/s) = "<<endl;
	for(int i=0;i<2;i++){ //Jumlah Kolom dari matriks Asli/ Jumlah baris dari matriks hasil transpose
		for(int j=0;j<n;j++){ //Jumlah baris dari matriks Asli/ Jumlah kolom dari matriks hasil transpose
			zt[i][j]=z[j][i];
			cout<<zt[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"================================================================================"<<endl;
	cout<<"Perkalian Matriks Transpose (x-rata(x)/s) = "<<endl;
	for(int i=0;i<2;i++){ //Jumlah Baris
		for(int j=0;j<2;j++){ //Jumlah Kolom
			ztz[i][j]=0;
			for(int k=0;k<n;k++){ //Jumlah yang sama
				ztz[i][j]+= (zt[i][k]*z[k][j]);
			}
			cout<<ztz[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"================================================================================"<<endl;
	cout<<"sy = "<<sy<<endl;
	cout<<"sx = "<<sx<<endl;
	cout<<"================================================================================"<<endl;
	cout<<endl;
	cout<<"matriks korelasi = "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<(1/(n-1)*ztz[i][j])<<" ";
	}cout<<endl;
	}cout<<endl;
	cout<<"================================================================================"<<endl;
	cout<<"korelasi nya yaitu sebesar = "<<1/(n-1)*ztz[0][1]<<" . "<<endl;

    //================================================================================
    //writing data array to a file
	//================================================================================
    // Open a file in a write mode.
    /*ofstream outfile;
    // specified name of file to be written
    outfile.open(filenameOUT);

	// loop writing all data string from an Array to file
	i=0;
    while(i<N-1){
        //outfile << string line << i <<" = " <<Dt_stringline[i] <<'\n';
        outfile << "original data ("<<Dt_list[i][1]<<" and "<<Dt_list[i][2]<<") "<<"\n";
        i++;
    }
    //finish to write all data from an Array and close the file
    cout<<endl<<endl<<"Please see your SUM data in your "<<"'"<<filenameOUT<<"'";
    outfile.close();
    getch();
    return 0;*/
}

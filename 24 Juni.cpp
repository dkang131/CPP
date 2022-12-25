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
	float varx, vary, kor, rxy, b1, b0;
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
    //N=i;
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
		varx += ((x[i]-ratax)*(x[i]-ratax)); //pow((x[i]-ratax),2)
		vary += ((y[i]-ratay)*(y[i]-ratay));
		kor += ((x[i]-ratax)*(y[i]-ratay));
	}
	stx = sqrt(varx/(n-1));
	sty = sqrt(vary/(n-1));
    rxy = kor/(pow((varx*vary),0.5));
    b1 = kor/varx;
    b0 = ratay-(b1*ratax);

    cout << "Stdev x : " << stx << endl;
    cout << "Stdev y : " << sty << endl;
    cout << "Regression : " << rxy << endl;
    cout << "b1 : " << b1 << endl;
    cout << "b0 : " << b0 << endl;
}


/*
int main () {
    //string stringline, Dt_stringline[100];
    char filenameIN[20],filenameOUT[20];
    int data1, data2, Dt_list[100][2],N,i=0;
	float x[100],y[100],stx=0,sty=0,jumx=0,jumy=0,ratax,ratay, sx,sy,zt[100][100],ztz[100][100],z[100][100];
	float varx, vary, kor, rxy, b1, b0;
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
	    for(int j=0;j<2;j++){
            x[i]=Dt_list[i][1];
            y[i]=Dt_list[i][2];
	    }
	}

}
*/

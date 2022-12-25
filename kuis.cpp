#include <fstream>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <sstream>

using namespace std;

int main(){
    char filenameIN[20];
    int x,x2,y,z;
    string stringline,fname,Dt_stringline[100];
    string TTM,Yield;
    int data1,data2;
    int data,Dt_list[100][2],N,i=0;
    float Y[50];
    int ttm[50][50];
    int eof();

    cout << " Enter filename to be opened: ";
    cin >> filenameIN;
/*
    ifstream infile;

    infile.open(filenameIN);
    if (!infile.is_open()){
        cout << "\n\n\n File " << filenameIN <<" does not exist" <<endl;
        cout <<"Unable to be opened.\n\n\n\n";
        return 0;
    }

    else
        cout << "Your file is ready to be opened " <<endl;
    cout << endl << "This is your data in file " << endl << "\n";

    if (infile.is_open())
    {
        //reapeating reading string data from file
        while ( getline (infile,stringline) )
        {
            //print data to the screen and save it in an Array Dt_stringline
            cout << stringline << '\n';
            Dt_stringline[i]=stringline;
            i++;
        }
        //close the file after all of line data have been read
        infile.close();
    }
    //fi the file does not exist then show this comment
    else {
    	cout << "File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.";
	}
    N=i;

    getch();

cout << "===============================================================" << endl;
*/
    ifstream coeff(filenameIN);
    if (coeff.is_open())
    {
        //ignore first line
        string line;
        getline(coeff, line);

        i=0;

        while(!coeff.eof())
        {
            getline(coeff, TTM, '\t');
            ttm[i][1] = stof(TTM);
            getline(coeff, Yield, '\n');
            Y[i] = stof(Yield);

            i += 1;
        }
        for(int j=0; j<i; j++){
            ttm[j][0] = 1;
            cout << Y[j] << endl;
        }
        cout << "===========================================" << endl;
        for(int j=0; j<i; j++){
            for(int k=0; k<2; k++){
                cout << ttm[j][k] << '\t';
            }
            cout << endl;
        }

        coeff.close();
    }

    else cout << "Unable to open file";




    return 0;
}

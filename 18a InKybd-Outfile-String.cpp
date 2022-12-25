#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    string stringline,fname;

    cout << "Please type your file name: ";
    cin >> fname;

    // Open a file in writing mode.
    ofstream outfile;
    // create/open a file to be written
    outfile.open("fname");

    cout << ">= please type, \'q\' in the new first character of line input to exit" << endl;

    //unlimited loop during writing data to file
    while(true){
        cout << "- ";
        //catch each character to be written in the file
        getline(cin, stringline);
        //loop entry line data will end when the character q is typed
        if(stringline == "q") break;
        // write the typed dat line to file
        outfile << stringline << endl;
    }
    //finish entry data and finish writing to file, the file will be closed
    outfile.close();

    //Open the existing file to be read
    ifstream infile;
    //open the specified existing file
    infile.open("fname");

    cout << endl << ">= Open and read a file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //repeat each line
        while ( getline (infile,stringline) )
        {
            // print the data here
            cout << stringline << '\n';
        }
        //close file after finished for reading
        infile.close();
    }
    //if there is no file to be read, then it will print this comment
    else cout << "Unable to open file";
    getch();
    return 0;
}

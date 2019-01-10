#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
ifstream infile;
ofstream outfile;



double test1, test2, test3, test4, test5, average;
string FirstName, LastName;

infile.open("inData.txt");
outfile.open("outData.txt");

outfile<< fixed << showpoint << setprecision(2);
cout << "processing" << endl;
infile >> FirstName >> LastName;

while(infile)
{
outfile << " Student name:" << FirstName << "" << LastName << endl;
infile >> test1 >> test2 >> test3 >> test4 >> test5;
outfile << "test scores:" << setw(6) << test1 <<  setw(6) << test2 <<
 setw(6) << test3 <<  setw(6) << test4 <<  setw(6) << test5 << endl;
 average = (test1 + test2 + test3 + test4 + test5) / 5.0;
 outfile << "average test score: " <<  setw(6) << average << endl << endl;
 infile >> FirstName >> LastName;




 }
infile.close();
 outfile.close();


 system("PAUSE");
 return 0;
}

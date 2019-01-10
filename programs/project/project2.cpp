#include <iostream.h>
#include <stdlib.h>
#include <string>
#include <iomanip.h>
#include <fstream>

int main()
{
    
using namespace std;

string subject, text , text_cheap;
double tcost, subtotal, texttotal, tcost_cheap;
int counter=0;

ifstream inFile;
ofstream outFile;

inFile.open("input2.txt");
outFile.open("output2.txt");


for (counter = 0; counter <4; counter++) {
 inFile >> subject, ;
cout << left << setw(9) << subject ; 
outFile << left << setw(9) << subject;
}

cout << left << endl;










system ("pause") ;
return 0;

}

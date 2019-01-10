
#include <iostream>
#include <stdlib.h> 
#include <string>
#include <iomanip>
#include <fstream>

int main()

{
	
	using namespace std;
		// define variables
		string firstname,lastname;
	double currentsalary, payincreased;
	cout <<
    
    ifstream infile;
    ofstream outfile;
   
   
    infile.open("Ch3_Ex6Data.txt");
	outfile.open("Ch3_Ex6Output.txt");	
	

	

	
	
    cout << fixed << showpoint << setprecision(2);
	outfile << fixed << showpoint << setprecision(2);
	
    infile>>lastName>>firstName>>oldsalary>>increasedpay;
	outfile<< lastName<< firstName;
	
	
	infile.close();
	outfile.close();
	    
        system("pause");
         return 0;
}

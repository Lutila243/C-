#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>

int main()

{
	// this program calculate the pay rise of three employees
/* Remember that you have to be consistant with your variables. In order for your program to compile and run
also careful with the >> and << for infile its >> for outfile its << */
	using namespace std;
		// define variables
		float percent_increased, new_sal, old_sal;
		string firstname,lastname;

    ifstream infile;
    ofstream outfile;


    infile.open("Ch3_Ex6Data.txt"); // open input
	outfile.open("Ch3_Ex6Output.txt"); // open output to write data

	cout << fixed << showpoint << setprecision(2);
	cout <<"processing data" << endl;


	infile >> lastname >> firstname >>old_sal >> percent_increased; // infile is for grabbing information from the file.
	new_sal=(old_sal * percent_increased)  + old_sal;

	outfile <<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl; // outfile is for writing to a file
	cout<<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;      // cout is to display to the CMD or Command Console.

	infile >> lastname >> firstname>> old_sal >>percent_increased;

	new_sal = (old_sal * percent_increased) + old_sal;

	outfile << "\n" <<firstname << " " <<	lastname << " " <<new_sal << endl;
    cout<<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;
    
	infile >>lastname >> firstname >> old_sal >> percent_increased;
	new_sal = (old_sal * percent_increased) + old_sal;

	outfile<< "\n " << firstname << " " << lastname << " " << new_sal << endl ;
    cout<<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;

	 infile. close () ; // closes infiles.
	 outfile. close () ; // closes outfile.

	 // end of the program

	 system ("pause") ;
	 return 0;
}


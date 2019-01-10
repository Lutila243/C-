
#include <iostream>
#include <stdlib.h> 
#include <string>
#include <iomanip>
#include <fstream>

int main()

{
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
	
	
	cin >> lastname >> firstname >>old_sal >> percent_increased;
	new_sal=(old_sal * percent_increased)  + old_sal;
	
	cout <<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;
	
	cout << firstname << " " << new_sal << endl;
	cin >> lastname >> firstname>> old_sal >>percent_increased;
	
	new_sal = (old_sal * percent_increased) + old_sal;
	
	cout << "\n" <<firstname << " " <<	lastname << " " <<new_sal << endl;
	
	outfile <<"\n" <<firstname << " " << lastname  << " " << new_sal << endl ;
	infile  >>lastname >> firstname >> old_sal >> percent_increased;
	 new_sal = (old_sal * percent_increased) + old_sal;
	 
	 cout << "\n " << firstname << " " << lastname << " " << new_sal << endl ;
	  
	 	
 outfile << "\n" << firstname << " " << lastname << " " << new_sal << endl ;
	  
	  infile. close () ;
	  outfile. close () ;
	  
	  // end of the program
	  
	  system ("pause") ;
	  return 0;
}
	

	

	
	
  

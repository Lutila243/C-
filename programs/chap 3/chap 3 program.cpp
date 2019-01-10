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


    indata.open("Ch3_Ex6data.txt"); // open input
    outdata.open("Ch3_Ex6Output.txt"); // open output to write data

    cout << fixed << showpoint << setprecision(2);
    cout <<"processing data" << endl;


    indata.open >> lastname >> firstname >>old_sal >> percent_increased;
    new_sal=(old_sal * percent_increased)  + old_sal;

    outdata.open <<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;

    cout << firstname <<" "<< lastname<<" " << new_sal << endl;
    
    indata.open >> lastname >> firstname>> old_sal >>percent_increased;

    new_sal = (old_sal * percent_increased) + old_sal;

    oudata.open << "\n" <<firstname << " " << lastname << " " <<new_sal << endl;
    cout <<"\n" <<firstname << " " << lastname  << " " << new_sal << endl ;
   
    indata.open >>lastname >> firstname >> old_sal >> percent_increased;
    new_sal = (old_sal * percent_increased) + old_sal;

    outdata.open << "\n " << firstname << " " << lastname << " " << new_sal << endl ;


 cout << "\n" << firstname << " " << lastname << " " << new_sal << endl ;

     indata. close () ;
     outdata. close () ;
     
     // end of the program
  system ("pause") ;
	 return 0;
}



#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int main()

{
    /* this program is design to calculate the pay of three employees
    by inputing (old salary * percent increaseed) + old salary to output the new salary*/


        // define variables
       float percent_increased, new_sal, old_sal;
        string firstname,lastname;

    ifstream infile;
    ofstream outfile;


    infile.open("Ch3_Ex6data.txt"); // open input
    outfile.open("Ch3_Ex6Output.txt"); // open output to write data

    cout << fixed << showpoint << setprecision(2);
    cout <<"processing data" << endl;


    infile >> lastname >> firstname >> old_sal >> percent_increased; 
    new_sal= old_sal * percent_increased / 100 + old_sal;

    outfile <<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl; // writing the output after calculation
    cout<<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;     // displaying to the CMD

    infile >> lastname >> firstname>> old_sal >> percent_increased;

    new_sal = old_sal * percent_increased / 100 + old_sal; 

    outfile << "\n" <<firstname << " " <<    lastname << " " <<new_sal << endl;
    cout<<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;

    infile >>lastname >> firstname >> old_sal >> percent_increased;
    new_sal = old_sal * percent_increased / 100 + old_sal;

    outfile<< "\n " << firstname << " " << lastname << " " << new_sal << endl ;
    cout<<"\n" << firstname <<" "<< lastname <<" "<<new_sal <<endl;

    infile. close () ; // closes infiles.
    outfile. close () ; // closes outfiles.
system ("pause");
return 0;
}

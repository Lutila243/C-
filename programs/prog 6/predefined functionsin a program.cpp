//how to use predefined functions.
//This program uses the math functions pow and sqrt to determine 
//and output the volume of the sphere, the  distance between two 
//points, repestively , and the string function length to find 
//the number of characters in the string.
//if hte raduis of the sphere is r, then the volume of the sphere 
//is (4/3)*PI*r^3. If (x1,y1) and (x2, y2) are the coordinates of two
//points in the X-Y  plane, then the distance between these points is 
//sqrt (x2-x1)^2 + (y2-y1)^2)

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI =3.1416; 

int main ()
{


double sphereRaduis;
double sphereVolume ; double point1X, pont1Y;
double point2X, point2Y;
double distance;
string str;
cout <<"Line 7: Enter the raduis of the sphere:";
cin >> sphereraduis;
cout<< endl;

sphereVolume = (4.0 / 3) * pow (sphereRaduis, 3);

cout<<"Line 11: The volume of the sphere is:"
    <<sphere volume << endl << endl;
    
    
cout<< "Line 12: Enter the coordinates of two"
    <<"points in the X-Y plane:";
    cin>>point1X>>point1Y>>point2X>>point2Y;
cout<<endl;

distance= sqrt(pow(point2X - point1X, 2)
               + pow(point2Y - point1Y,2) )   
cout<< "Line 16: The distance betwen the points"
    << "("<<point1X<<" "<<point1Y") and"  
	<< "(" <<point2X<<" "<<poit2Y<<") is :"
	<< distance << endl << endl;
	
	str= "programming with C++";
cout<< "Line 18: The number of characters,"
cout<< "including blanks, in \ "" << str << "\" is: "
	<< str.	length() << endl;
	
	return 0;
}
               
    

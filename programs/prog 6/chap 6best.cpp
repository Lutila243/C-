#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

/* i have fixed your errors you had throughout your program read the comments i have posted on your program. this particular program is going to
show you how to do chapter 7 through 9 you have to make sure you know this chapter before you go on to the next one. */


float area (float, float, float, float);
float dist (float, float, float, float);
float ctr (float, float, float, float);
float pt (float, float, float, float);
float r (float, float, float, float);
float circ (float, float, float, float);


 float dist (float x1, float y1, float x2, float y2){ // need to be consistant with your variables.
    float dist;
   int x, y;
       dist=sqrt((pow(x1-x2,2))+(pow(y1-y2,2))); // you  need to learn how to use your sqrt and pow function in unison.
      return dist;
}

float r (float x1, float y1, float x2, float y2) {

    return dist  (x1, y1, x2, y2); // to get the radius you just need the distance or return the distance.
}

float circ (float x1, float y1, float x2, float y2) {
const float p = 3.14; // again you need to be consistant with your program you had different variables.
float c;

 c = 2*p*r(x1,y1,x2,y2); // <--- this part you have different variables.
return c;
}

float area (float x1, float y1, float x2, float y2) {
    return 3.14*pow(r(x1,y1,x2,y2),2); // this one is the area part conbiming radius, pie, along with the pow function.

 
 }


using namespace std;
int main(){
cout<<fixed<<showpoint<<setprecision(3);

    float x1, x2, y1, y2;
    float d;
    cout<<"\n Enter the x value of the center of the circle"<<endl;
    cin>> x1;
    cout<<"\n Enter the y value of the center of the circle"<<endl;
    cin>> y1;
    cout<<"\n Enter the x value for the point of the circle"<<endl;
    cin>> x2;
    cout<<"\n Enter the y value for the point of the circle"<<endl;
    cin>>y2; // you forgot to get the cin for the y2.
    cout<<"\n The center of the circle is : "<<"("<<(x1)<<(y1)<<")"<<endl;
    cout<<"\n The point of the circle is : "<<"("<<(x2)<<(y2)<<")"<<endl;
    cout<<"\n The radius of the circle is : "<<r(x1, y1, x2, y2)<<endl; // was not getting the x and y in the right order.
    cout<<"\n The circumference of the circle is : "<<circ(x1, y1, x2, y2)<<endl;// same thing as above.
    cout<<"\n the area of the circle is : "<<area(x1, y1, x2, y2)<<endl; // same thing as above.


        system("PAUSE");

    //end of the program
}


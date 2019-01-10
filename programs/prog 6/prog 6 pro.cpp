#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>


float r (float, float, float, float);
float circ (float, float, float, float);
float area (float, float, float, float);
float dist (float, float, float, float);
float ctr (float, float, float, float);
float pt (float, float, float, float);


 float dist (float x1, float y1, float x2, float y2){ 
    float dist;
   int x, y;
       dist=sqrt((pow(x1-x2,2))+(pow(y1-y2,2))); 
      return dist;
}

float r (float x1, float y1, float x2, float y2) {

    return dist  (x1, y1, x2, y2); 
}

float circ (float x1, float y1, float x2, float y2) {
const float p = 3.14; 
float c;

 c = 2*p*r(x1,y1,x2,y2);
return c;
}

float area (float x1, float y1, float x2, float y2) {
    return 3.14*pow(r(x1,y1,x2,y2),2);

 
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
    cin>>y2; 
    cout<<"\n The center of the circle is : "<<"("<<(x1)<<(y1)<<")"<<endl;
    cout<<"\n The point of the circle is : "<<"("<<(x2)<<(y2)<<")"<<endl;
    cout<<"\n The radius of the circle is : "<<r(x1, y1, x2, y2)<<endl; 
    cout<<"\n The circumference of the circle is : "<<circ(x1, y1, x2, y2)<<endl;
    cout<<"\n the area of the circle is : "<<area(x1, y1, x2, y2)<<endl; 


        system("PAUSE");

    //end of the program
}


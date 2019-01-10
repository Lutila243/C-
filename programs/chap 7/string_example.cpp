/* This program will create a string array and will print it */

#include <iostream.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
string shows[10];

shows[0] = "The Simpsons";
shows[1] = "Tom and Jerry";
shows[2] = "The Flinstones";
shows[3] = "The Jetsons";
shows[4] = "Woody Wood Peker";
shows[5] = "Yogi Bear";
shows[6] = "Skunk Fu";
shows[7] = "Ed, Edd n Eddy";
shows[8] = "Camp Lazlo";
shows[9] = "Scooby Doo";
int i;

cout << "\nHere is a list of my favorite cartoons.... " << endl;
for (i=0; i<10; i++) {
  cout << shows[i] << endl;
}  // end of i

cout << "\nHere is a list and the size of each of my favorite cartoons.... " << endl;
for (i=0; i<10; i++) {
  cout << shows[i]  << " *** has a length of *** " << shows[i].length() << endl;
}  // end of i
      system("PAUSE");
      return 0;
}

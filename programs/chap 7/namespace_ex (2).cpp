// C++ for scientists and engineers
// This program will demonstrates the concept of NAMESPACE

#include <iostream.h>
#include <stdlib.h>
#include <g:/cis121_all_chapters_09/chap8/my_pgm.cpp>


using namespace std;
using namespace my_pgm;

int main()
{
  int earth_w;
  cout << "\nEnter your weight on Earth: ";
  cin >> earth_w;

  cout << "\n\nYour wieght on the moon will be: " << moon_w(earth_w) << endl;
  cout << endl;

      system("PAUSE");
      return 0;
}

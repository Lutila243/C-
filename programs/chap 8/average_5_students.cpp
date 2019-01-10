/*  This program will declare a 2 dimentional array and find averages of 10 quizes for 5 students */

#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
int quizzes[5][10] = {90, 70, 80, 78, 98, 87, 95, 78, 86, 100,
                      70, 45, 87, 94, 90, 76, 34, 56, 98, 66,
                      98, 97, 85, 93, 87, 43, 65, 34, 87, 90,
                      66, 45, 98, 12, 56, 84, 86, 56, 93, 81,
                      90, 80, 70, 60, 90, 80, 70, 60, 90, 80};
float avgs[5];
int i, j, stud_tot=0, tot=0;
float avg;

cout << "\n\nThe scores for each student are: " << endl << endl;
for (i=0; i<5; i++) {
  for (j=0; j<10; j++) {
    cout << quizzes[i][j] << ", ";
  }  // end of j loop
  cout << endl << endl;
}  // end of for i

// Calculate the averages of all of the students
for (i=0; i<5; i++) {
  for (j=0; j<10; j++) {
    stud_tot = stud_tot + quizzes[i][j];
    tot = tot + quizzes[i][j];
  }  // end of j loop
  avgs[i] = stud_tot/10.0;
  stud_tot=0;
}  // end of for i

//print all - scores and avgs
cout << "\n\nThe scores for the students and their averages are: " << endl << endl;
for (i=0; i<5; i++) {
  for (j=0; j<10; j++) {
    cout << quizzes[i][j] << ", ";
  }  // end of j loop
  cout << " --> " << avgs[i];
  cout << endl << endl;
}  // end of for i

      system("PAUSE");
      return 0;
}

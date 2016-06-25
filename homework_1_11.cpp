#include <iostream>
using namespace std;

// Defines if the year is leap or not
int main (int argc, char** argv) {
  
  int year = 2015;
  bool leap;
  
  if (year % 4 != 0) {
    // If the year is not evenly divisible by 4, it is not a leap year
    leap = false;
  
  } else if (year % 100 != 0) {
    // Otherwise, if the year is not evenly divisible by 100, it is not a leap year
    leap = true;
  
  } else if (year % 400 == 0) {
    // Otherwise, if the year is evenly divisible by 400, it is a leap year
    leap = true;
  
  } else {
    // Otherwise, it is a not leap year 
    leap = false;
  }

  if (leap == false) cout << "no" << endl;
  else cout << "yes" << endl;

  return 0;
}
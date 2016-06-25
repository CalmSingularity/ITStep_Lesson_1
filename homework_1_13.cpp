#include <iostream>
using namespace std;

int day = 26;
int month = 06;
int year = 2016;

// Defines if the year is leap or not and returns boolean value
bool isLeap (int year) {
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

  return leap;
}


// Determination of the day of the week
int main (int argc, char** argv) {

  int month_code, year_in_century, century_code, day_of_week;
  year_in_century = year % 100;
  
  switch (month) {
    case 1:
      if (isLeap(year)) month_code = 6;
      else month_code = 0;
      break;
    case 2:
      if (isLeap(year)) month_code = 2;
      else month_code = 3;
      break;
    case 10: month_code = 0; break;
    case 5:  month_code = 1; break;
    case 8:  month_code = 2; break;
    case 3:  month_code = 3; break;
    case 11: month_code = 3; break;
    case 6:  month_code = 4; break;
    case 9:  month_code = 5; break;
    case 12: month_code = 5; break;
    case 4:  month_code = 6; break;
    case 7:  month_code = 6; break;
  } 

  switch ((year / 100) % 4) {
    case 0: century_code = 0; break;
    case 1: century_code = 5; break;
    case 2: century_code = 3; break;
    case 3: century_code = 1; break;
  }

  day_of_week = (day + month_code + year_in_century + year_in_century/4 + century_code) % 7;
  switch (day_of_week) {
    case 0: cout << "Saturday" << endl; break;
    case 1: cout << "Sunday" << endl; break;
    case 2: cout << "Monday" << endl; break;
    case 3: cout << "Tuesday" << endl; break;
    case 4: cout << "Wednesday" << endl; break;
    case 5: cout << "Thursday" << endl; break;
    case 6: cout << "Friday" << endl; break;
  }

  return 0;
}
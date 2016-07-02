#include <iostream>

// Defines if the year is leap or not
bool isLeap(int year) {
  if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
    return false;
  } else {
    return true;
  }
}


// Determination of the day of the week using tabular method described here:
// https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
int main(int argc, char** argv) {
  int day, month, year;
  std::cout << "Enter day month year: ";
  std::cin >> day >> month >> year;

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
    case 0: std::cout << "Saturday" << "\n"; break;
    case 1: std::cout << "Sunday" << "\n"; break;
    case 2: std::cout << "Monday" << "\n"; break;
    case 3: std::cout << "Tuesday" << "\n"; break;
    case 4: std::cout << "Wednesday" << "\n"; break;
    case 5: std::cout << "Thursday" << "\n"; break;
    case 6: std::cout << "Friday" << "\n"; break;
  }

  return 0;
}
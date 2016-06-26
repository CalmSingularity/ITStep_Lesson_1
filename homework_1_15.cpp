#include <iostream>
using namespace std;

long long int timestamp = 1464765157274;

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


// Returns the number of milliseconds in a given year
long long int msInYear(int year) {
  long long int ms_in_day = 1000 * 60 * 60 * 24;
  if (isLeap(year)) return ms_in_day * 366;
  else return ms_in_day * 365;
}


// Returns the number of milliseconds in a given month of a given year
long long int msInMonth(int month, int year) {
  long long int ms_in_day = 1000 * 60 * 60 * 24;
  switch (month) {
    case 2:  
      if (isLeap(year)) return ms_in_day * 29; 
      else return ms_in_day * 28;
      break;
    case 1:  return ms_in_day * 31; break;
    case 3:  return ms_in_day * 31; break;
    case 4:  return ms_in_day * 30; break;
    case 5:  return ms_in_day * 31; break;
    case 6:  return ms_in_day * 30; break;
    case 7:  return ms_in_day * 31; break;
    case 8:  return ms_in_day * 31; break;
    case 9:  return ms_in_day * 30; break;
    case 10: return ms_in_day * 31; break;
    case 11: return ms_in_day * 30; break;
    case 12: return ms_in_day * 31; break;
  }
}


// Defines current date and time by timestamp in milliseconds
int main (int argc, char** argv) {

  int day, month, year, hour, min;
  long long int ms_in_day = 1000 * 60 * 60 * 24;

  // define year
  for (year = 1970; timestamp > msInYear(year); year++) {
    timestamp -= msInYear(year);
  }

  // define month
  for (month = 1; timestamp > msInMonth(month, year); month++) {
    timestamp -= msInMonth(month, year);
  }
  
  // define day
  day = timestamp / ms_in_day + 1;
  timestamp %= ms_in_day;

  // define hour
  hour = timestamp / (1000*60*60);
  timestamp %= 1000*60*60;

  // define min
  min = timestamp / (1000*60);
  timestamp %= 1000*60;

  // printing resulting date
  cout << day << " ";
  switch (month) {
    case 1:  cout << "January"; break;
    case 2:  cout << "February"; break;
    case 3:  cout << "March"; break;
    case 4:  cout << "April"; break;
    case 5:  cout << "May"; break;
    case 6:  cout << "June"; break;
    case 7:  cout << "July"; break;
    case 8:  cout << "August"; break;
    case 9:  cout << "September"; break;
    case 10: cout << "October"; break;
    case 11: cout << "November"; break;
    case 12: cout << "December"; break;
  }
  cout << " " << year << " " << hour << ":" << min << endl;

  return 0;
}
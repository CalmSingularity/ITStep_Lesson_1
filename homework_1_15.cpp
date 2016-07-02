#include <iostream>

const long long int ms_in_day = 1000 * 60 * 60 * 24;

// Defines if the year is leap or not:
bool isLeap(int year) {
  if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
    return false;
  } else {
    return true;
  }
}

// Returns the number of milliseconds in a given year:
long long int msInYear(int year) {
  if (isLeap(year)) {
    return ms_in_day * 366;
  } else {
    return ms_in_day * 365;
  }
}

// Returns the number of milliseconds in a given month of a given year:
long long int msInMonth(int month, int year) {
  long long int ms_in_day = 1000 * 60 * 60 * 24;
  switch (month) {
    case 1:  return ms_in_day * 31; break;
    case 2:  
      if (isLeap(year)) {
        return ms_in_day * 29; 
      } else {
        return ms_in_day * 28;
      }
      break;
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


// Defines current date and time by a timestamp in milliseconds:
int main(int argc, char** argv) {

  int day, month, year, hour, min;
  long long int timestamp;
  
  std::cout << "Enter a timestamp in milliseconds: ";
  std::cin >> timestamp;

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
  hour = timestamp / (1000 * 60 * 60);
  timestamp %= 1000 * 60 * 60;

  // define min
  min = timestamp / (1000 * 60);
  timestamp %= 1000 * 60;

  // print resulting date
  std::cout << day << " ";
  switch (month) {
    case 1:  std::cout << "January"; break;
    case 2:  std::cout << "February"; break;
    case 3:  std::cout << "March"; break;
    case 4:  std::cout << "April"; break;
    case 5:  std::cout << "May"; break;
    case 6:  std::cout << "June"; break;
    case 7:  std::cout << "July"; break;
    case 8:  std::cout << "August"; break;
    case 9:  std::cout << "September"; break;
    case 10: std::cout << "October"; break;
    case 11: std::cout << "November"; break;
    case 12: std::cout << "December"; break;
  }
  std::cout << " " << year << " " << hour << ":" << min << "\n";

  return 0;
}
#include <iostream>

// Defines if the year is leap or not
bool isLeap(int year) {
  if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
    return false;
  } else {
    return true;
  }
}

int main(int argc, char** argv) {
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if (isLeap(year)) {
    std::cout << "yes" << "\n";
  } else {
    std::cout << "no" << "\n";
  }
  return 0;
}
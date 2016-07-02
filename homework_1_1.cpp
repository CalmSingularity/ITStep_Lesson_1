#include <iostream>

int main(int argc, char** argv) {
  int number, remainder;
  std::cout << "Enter a 4-digit number: ";
  std::cin >> number;
  std::cout << "Reverse order: ";
  for (int i = 1; i <= 4; i++) {
    remainder = number % 10;
    std::cout << remainder;
    number = (number - remainder) / 10;
  }
  return 0;
}
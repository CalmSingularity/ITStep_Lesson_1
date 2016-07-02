#include <iostream>

// Functions prints a character n_repeats number of times:
void printChar(char character, int n_repeats) {
  for (int i = 1; i <= n_repeats; i++) {
    std::cout << character;
  }
}

// Programm prints '*' characters in a form of an isosceles triangle.
int main(int argc, char** argv) {
  
  int N = 20;
  std::cout << "Enter the number of lines in the triangle: ";
  std::cin >> N;
  int max_length = N * 2 - 1;
  
  for (int n_asterisks = 1; n_asterisks <= max_length; n_asterisks = n_asterisks + 2) {
    int n_spaces = (max_length - n_asterisks) / 2;
    printChar(' ', n_spaces);
    printChar('*', n_asterisks);
    printChar(' ', n_spaces);
    std::cout << "\n";
  }
  return 0;
}
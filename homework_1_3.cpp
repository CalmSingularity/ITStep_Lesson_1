#include <iostream>
using namespace std;

// Functions prints a character n_repeats number of times:
void printChar(char character, int n_repeats) {
  for (int i = 1; i <= n_repeats; i++) cout << character;
}

// Programm prints '*' characters in a form of an isosceles triangle.
int main (int argc, char** argv) {
  
  // N equals to the number of lines printed.
  int N = 20;
  int max_length = N * 2 - 1;
  
  for (int n_asterisks = 1; n_asterisks <= max_length; n_asterisks = n_asterisks + 2) {
    int n_spaces = (max_length - n_asterisks) / 2;
    printChar(' ', n_spaces);
    printChar('*', n_asterisks);
    printChar(' ', n_spaces);
    cout << endl;
  }
  return 0;
}
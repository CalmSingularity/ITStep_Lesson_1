#include <iostream>
#include <cmath>

// Converts an integer number N into the binary format
int main(int argc, char** argv) {
  int N;
  std::cout << "Enter an integer number: ";
  std::cin >> N;
  int remainder = N;
  int length = floor(log2(N));
  char binary[256]="";

  for (int i = length; i >= 0; i--) {
    binary[i] = (remainder % 2 == 0) ? '0' : '1';
    remainder = floor(remainder / 2);
  }

  // Print binary result:
  std::cout << N << " in the binary format: ";
  for (int i = 0; i <= length; i++) {
    std::cout << binary[i];
  }
  std::cout << "\n";

  return 0;
}
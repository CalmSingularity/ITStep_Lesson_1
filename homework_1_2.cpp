#include <iostream>

int main(int argc, char** argv) {
  for (int a = 1; a <= 9; a++) {
    for (int b = 1; b <= 9; b++) {
      std::cout << a << " * " << b << " = " << (a * b) << "\n";
    }
    std::cout << "\n";
  }
  return 0;
}
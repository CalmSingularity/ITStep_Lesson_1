#include <iostream>

// The function calculates a raised to power b using recursion:
int raiseToPower(int a, int b) {
  if (b == 1) return a;
  return raiseToPower(a, b-1) * a;
}

int main(int argc, char** argv) {
  int a, N;
  std::cout << "Enter the base (a): ";
  std::cin >> a;
  std::cout << "Enter the exponent (N): ";
  std::cin >> N;
  std::cout << a << " ^ " << N << " = " << raiseToPower(a, N) << "\n";
  return 0;
}
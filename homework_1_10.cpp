#include <iostream>

// The function calculates a raised to power N using recursion
double raiseToPower(double a, int N) {
  if (N == 1) {
    return a;
  }
  return raiseToPower(a, N - 1) * a;
}

// The function calculates a factorial of N using recursion
int factorial(int N) {
  if (N==1) {
    return 1;
  }
  return factorial(N - 1) * N;
}


// Calculates sin(x) using Taylor series formula
int main(int argc, char** argv) {
  double x;
  std::cout << "Enter an argument to calculate the sine of: ";
  std::cin >> x;
  double sin = 0;
  int sign = 1;

  for (int i = 1; i <= 5; i += 2) {
    sin = sin + sign * (raiseToPower(x, i) / factorial(i));
    sign *= -1;
  }
  std::cout << "sin (" << x << ") = " << sin << "\n";
  return 0;
}
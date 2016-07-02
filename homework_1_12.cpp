#include <iostream>
#include <cmath>

// Defines the greatest common divisor of a and b using Euclidean algorithm
int gcd(int a, int b) {
  if (b == 0) {
    return std::abs(a);
  }
  return gcd(b, a % b);
}

int main(int argc, char** argv) {
  int a, b;
  std::cout << "Enter a and b: ";
  std::cin >> a >> b;
  std::cout << "GCD (" << a << ", " << b << ") = " << gcd(a, b) << "\n";
  return 0;
}
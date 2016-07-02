#include <iostream>

// Calculates a scalar product of two arrays X and Y
int main(int argc, char** argv) {
  int N = 8;
  int X[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int Y[] = {8, 7, 6, 5, 4, 3, 2, 1};
  int Z[256], scalar_product = 0;

  std::cout << "Z = (";
  for (int i = 0; i < N; i++) {
    Z[i] = X[i] * Y[i];
    std::cout << Z[i];
    if (i != N-1) {
      std::cout << ", ";
    }
    scalar_product += Z[i];
  }
  std::cout << ")" << "\n";
  std::cout << "Scalar product = " << scalar_product << "\n";
  return 0;
}
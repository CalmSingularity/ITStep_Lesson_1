#include <iostream>
using namespace std;

// Calculates a scalar product of two arrays X and Y
int main (int argc, char** argv) {
  int N = 8;
  int X[N] = {1, 2, 3, 4, 5, 6, 7, 8};
  int Y[N] = {8, 7, 6, 5, 4, 3, 2, 1};
  int Z[N], scalar_product = 0;

  cout << "Z = (";
  for (int i = 0; i < N; i++) {
    Z[i] = X[i] * Y[i];
    cout << Z[i];
    if (i != N-1) cout << ", ";
    scalar_product += Z[i];
  }
  cout << ")" << endl;
  cout << "Scalar product = " << scalar_product << endl;
  return 0;
}
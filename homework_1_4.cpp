#include <iostream>
using namespace std;

// The function calculates a raised to power N using recursion and returns the result
int raiseToPower(int a, int N) {
  if (N == 1) return a;
  int result = raiseToPower(a, N-1) * a;
  return result;
}

int main (int argc, char** argv) {
  int a = 2, N = 8;
  cout << a << "^" << N << " = " << raiseToPower(a, N) << endl;
  return 0;
}
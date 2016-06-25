#include <iostream>
using namespace std;

// The function calculates a raised to power N using recursion and returns the result
double raiseToPower(double a, int N) {
  if (N == 1) return a;
  double result = raiseToPower(a, N-1) * a;
  return result;
}

// The function calculates a factorial of N using recursion and returns the result
int factorial(int N) {
  if (N==1) return 1;
  int answer = factorial(N-1) * N;
  return answer;
}


// Calculates sin(x) using Taylor series formula
int main (int argc, char** argv) {
  
  double x = 0.5;
  
  double sin = 0;
  int sign = 1;

  for (int i = 1; i <= 5; i += 2) {
    sin = sin + sign * (raiseToPower(x, i) / factorial(i));
    cout << sin << endl;
    sign *= -1;
  }

  return 0;
}
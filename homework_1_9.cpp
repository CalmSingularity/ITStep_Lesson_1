#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char** argv) {
  // int variable takes 4 bytes of 8 bits each
  // signed variable divides the max value by two to reflect positive and negative values
  // one posible value is taken by zero
  long long int max = pow (2, 8*4) / 2 - 1;
  cout << max << endl;
  return 0;
}
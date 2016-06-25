#include <iostream>
#include <cmath>
using namespace std;

// Converts an integer number N into a binary format
int main (int argc, char** argv) {
  int N = 30;
  int remainder = N;
  int length = floor (log2(N));
  char binary[length]="";

  for (int i = length; i >= 0; i--) {
    binary[i] = (remainder % 2 == 0) ? '0' : '1';
    remainder = floor(remainder/2);
  }

  // Print binary result:
  for (int i = 0; i <= length; i++) cout << binary[i];
  cout << endl;

  return 0;
}
#include <iostream>
using namespace std;

int main (int argc, char** argv) {
  for (int a = 1; a <= 9; a++) {
    for (int b = 1; b <= 9; b++) {
      cout << a << " * " << b << " = " << (a * b) << endl;
    }
    cout << endl;
  }
  return 0;
}
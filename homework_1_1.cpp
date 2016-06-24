#include <iostream>
using namespace std;

int main (int argc, char** argv) {
  int number = 1234, remainder;
  for (int i = 1; i <= 4; i++) {
    remainder = number % 10;
    cout << remainder << " ";
    number = (number - remainder) / 10;
  }
  return 0;
}
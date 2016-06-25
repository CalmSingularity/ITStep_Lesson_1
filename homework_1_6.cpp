#include <iostream>
#include <cmath>
using namespace std;

// Calculates an Euclidean distance between two arrays X and Y
int main (int argc, char** argv) {
  int N = 8;
  int X[N] = {11, 12, 13, 14, 15, 16, 17, 18};
  int Y[N] = {8, 7, 6, 5, 4, 3, 2, 1};
  double eucl_distance = 0;

  for (int i = 0; i < N; i++) {
    eucl_distance += pow(X[i] - Y[i], 2);
  }
  eucl_distance = sqrt(eucl_distance);
  cout << "Euclidean distance = " << eucl_distance << endl;
  return 0;
}
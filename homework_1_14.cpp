#include <iostream>
using namespace std;

void printArray (int A[], int N) {
  cout << "(";
  for (int i = 0; i < N; ++i) {
    cout << A[i];
    if (i != N-1) cout << ", ";
  }
  cout << ")" << endl;
}

// Sorts source array and writes result in dest array
int main(int argc, char** argv) {
  int source[] = {1,5,-8,3,7,4,6,9,2,-1};
  int N = sizeof(source) / sizeof(source[0]);
  int dest[N];
  
  dest[0] = source[0];
  
  for (int k = 1; k < N; ++k) {
    int current = source[k];
    int i = k - 1;
    while (i >= 0 && dest[i] > current) {
      dest[i+1] = dest[i];
      --i;
    }
    dest[i+1] = current;
  }

  cout << "dest = ";
  printArray (dest, N);

  return 0;
}
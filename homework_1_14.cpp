#include <iostream>

// Prints array A of the length N:
void printArray(int A[], int N) {
  std::cout << "(";
  for (int i = 0; i < N; ++i) {
    std::cout << A[i];
    if (i != N-1) {
      std::cout << ", ";
    }
  }
  std::cout << ")" << "\n";
}

// Sorts array A of the length N:
void sort(int* A, int N) {
  for (int k = 1; k < N; ++k) {
    int current = A[k];
    int i = k - 1;
    while (i >= 0 && A[i] > current) {
      A[i + 1]=A[i];
      --i;
    }
    A[i + 1]=current;
  }
}

// Sorts source array and prints it:
int main(int argc, char** argv) {
  int source[] = {1, 5, -8, 3, 7, 4, 6, 9, 2, -1};
  int N = sizeof(source) / sizeof(source[0]);
  // int dest[N];
  
  sort(source, N);
  std::cout << "dest = ";
  printArray(source, N);

  return 0;
}
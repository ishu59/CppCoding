//#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

void intArr() {
  int sz = 10;
  int *p = new int[sz];
  for (int i = 0; i < sz; ++i) {
    p[i] = i * 3;
  }
  for (int j = 0; j < sz; ++j) {
    cout << p[j] << endl;
  }
  delete[] p;
  p = nullptr;
}
void charArr() {
  char *c =
      new char[4]; // One more than required string length for null termination
  strcpy(c, "C++");
  cout << c << endl;
  delete[] c;
  c = nullptr;
}

void arr2d() {
  int arr[2][2] = {1, 2, 3, 4};
  cout << arr[1][1] << endl;
  int *a1heap = new int[2]{1, 2};
  int *a2heap = new int[2]{3, 4};
  int *a3heap = new int[2]{6, 9};
  int **arrheap = new int *[2] { a1heap, a2heap };
  cout << "arrheap(1,1): " << arrheap[1][1] << '\n';
  arrheap[1] = a3heap;
  cout << "arrheap(1,1): " << arrheap[1][1] << '\n';

  //  Delete should be in same order of in itialization
  delete[] a1heap;
  delete[] a2heap;
  delete[] a3heap;
  //  alternatively
  // delete [] arrheap[0];
  // delete [] arrheap[1];
  delete[] arrheap;
}
int main() {
  //  intArr();
  //  charArr();
  arr2d();
  return 0;
}
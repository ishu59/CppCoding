#include <iostream>
using namespace std;
int main() {
  int arr[] = {1, 2, 3, 4, 5};

  //  ============================================================
  //  old way
  /*
  //  auto begin = std::begin(arr);
  //  auto end = std::end(arr);
  int *q = &arr[0];
  int *begin = arr;
  int *end = &arr[5];

  while (begin != end) {
    cout << *begin << '\t';
    ++begin;
  }
   */
  //  ============================================================
  //  modified way
  //  ============================================================
  auto &&range = arr;
  auto begin = std::begin(range);
  auto end = std::end(range);
  for (; begin != end; ++begin) {
    cout << *begin << '\t';
  }
  cout << endl;

  auto &&range2 = {1, 2, 3, 4, 5, 67};
  auto begin2 = std::begin(range2);
  auto end2 = std::end(range2);
  for (; begin2 != end2; ++begin2) {
    cout << *begin2 << '\t';
  }
  cout << endl;
  return 0;
}
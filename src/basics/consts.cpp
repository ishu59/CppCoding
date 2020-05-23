#include <iostream>
using namespace std;

void print(int &x) { cout << "Running normal fn \n" << x << endl; }
void print(const int &x) { cout << "Running const fn \n" << x << endl; }
int main() {
  // Try to modify x1 & x2 and see the compilation output
  int x = 5;
  const int MAX = 12;
  int &ref_x1 = x;
  const int &ref_x2 = x;
  print(x);
  print(MAX);

  //  // Try to modify the pointer (e.g. ptr1) and the pointee value (e.g.
  //  *ptr1) const int *ptr1 = &x; int *const ptr2 = &x; const int *const ptr3 =
  //  &x;
  //
  //  // Find which declarations are valid. If invalid, correct the declaration
  //  const int *ptr3 = &MAX;
  //  int *ptr4 = &MAX;
  //
  //  const int &r1 = ref_x1;
  //  int &r2 = ref_x2;
  //
  //  int *&p_ref1 = ptr1;
  //  const int *&p_ref2 = ptr2;
}
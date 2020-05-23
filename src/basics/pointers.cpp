//
// Created by ishu on 5/22/20.
//
#include <iostream>
int Add(int *a, int *b);                  // Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); // Add two numbers and return the sum
// through the third pointer argument
void Swap(int *a, int *b); // Swap the value of two integers
void Factorial(int *a,
               int *result); // Generate the factorial of a number and return
// that through the second pointer argument
using namespace std;
int main() {
  //  Test Add
  int x{10};
  int y{20};
  cout << "x + y = " << Add(&x, &y) << '\n';
  int res{0};
  AddVal(&x, &y, &res);
  cout << "with result x + y = " << res << '\n';
  cout << "Value of X: " << x << ", Value of Y: " << y << endl;
  Swap(&x, &y);
  cout << "Value of X: " << x << ", Value of Y: " << y << endl;
  int fact{6};
  Factorial(&fact, &res);
  cout << "value of factorial of  " << fact << " : " << res << endl;
  return 0;
}

int Add(int *a, int *b) { return *a + *b; }
void AddVal(int *a, int *b, int *result) {
  *result = *a + *b;
}
void Swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void Factorial(int *a, int *result) {
  *result = 1;
  for (int i = 2; i <= *a; i++) {
    *result = (*result) * i;
  }
}
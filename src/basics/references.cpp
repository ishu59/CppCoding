#include <iostream>
void Add(int a, int b, int &result); // Add two numbers and return the result
                                     // through a reference parameter
void Factorial(int a, int &result);  // Find factorial of a number and return
                                     // that through a reference parameter
void Swap(int &a, int &b); // Swap two numbers through reference arguments
using namespace std;
int main() {
  int x{10};
  int y{20};
  int res{0};
  Add(x, y, res);

  cout << "with result x + y = " << (res) << '\n';
  cout << "Value of X: " << x << ", Value of Y: " << y << endl;
  Swap(x, y);
  cout << "Value of X: " << x << ", Value of Y: " << y << endl;
  int fact{6};
  Factorial(fact, res);
   cout << "value of factorial of  " << fact << " : " << res << endl;
  return 0;
}

void Add(int a, int b, int &result) { result = a + b; }
void Factorial(int a, int &result) {
  result = 1;
  for (int i = 2; i <= a; ++i) {
    result *= i;
  }
}
void Swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}
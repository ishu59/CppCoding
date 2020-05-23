#include <iostream>
using namespace std;
int main() {
  int *p = new int{10};
  cout << *p << '\n';
  delete p;
  p = nullptr;
  return 0;
}
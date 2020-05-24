#include "Integer.h"
#include <iostream>
using namespace std;

void basicTests();
void directTest();
/* Without friend declaration.
Integer operator+(int val, const Integer &other) {
  Integer tmp{val + other.getval()};
  return tmp;
}

std::ostream &operator<<(std::ostream &out, Integer &cur) {
  out << cur.getval();
  return out;
}

std::istream & operator>>(std::istream &input, Integer & cur){
  int x;
  input >> x;
  cur.setval(x);
  return input;
}
*/
int main() {
  //  basicTests();
  directTest();
  return 0;
}

void directTest() {
  Integer i{3};
  Integer j;
  cout << i << '\t' << j << endl;
  cin >> j;
  cout << i << '\t' << j << endl;
  j();
}

void basicTests() {
  Integer i{10};
  cout << i.getval() << endl;
  Integer j(i);
  cout << j.getval() << endl;
  j.setval(20);
  cout << j.getval() << endl;
  Integer k(std::move(Integer(25)));
  cout << k.getval() << endl;
  Integer l = j + k;
  cout << l.getval() << endl;
  cout << "preincrement \n";
  cout << (++l).getval() << endl;
  cout << "Post Increment \n";
  cout << (l++).getval() << endl;
  cout << l.getval() << endl;
  cout << "Equality Test False\n";
  cout << (l == i) << endl;
  cout << "Equality Test True\n";
  l.setval(i.getval());
  cout << (l == i) << endl;
  cout << "Copy Assignment \n";
  j = k;
  cout << j.getval() << endl;
  cout << "Move Assignment Dont use (i).\n";
  j = std::move(i);
  cout << j.getval() << endl;
  Integer x = j + 10;
  cout << x.getval() << endl;
  Integer y = 2 + x;
  cout << y.getval() << endl;
  cout << "test direct << operator assignment\n";
  y.setval(99);
  cout << y << endl;
}
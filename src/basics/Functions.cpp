#include <iostream>
using namespace std;
int add(int x, int y) { return x + y; }
float add(float x, float y) { return x + y; }
void endmsg() { cout << "this is the end \n"; }
int main() {
  atexit(endmsg); // always called in the end
  int a = 10;
  int b = 15;
  float x = 10.5f;

  //  int (*addPtr)(int, int) = add;
  int (*addPtr)(int, int) = &add;
  cout << addPtr(a, b) << '\n';
  cout << add(x, x) << '\n';
  cout << "hello world\n"; /* Hello world will be printed before atexit method
                              is called*/
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
  int sz = 10;
  int *p = calloc(sz, sizeof(int));
  *p = 10;
  printf("%d \n", *p);
  for (int i = 0; i < sz; ++i) {
    p[i] = i * 2;
  }
  for (int i = 0; i < sz; ++i) {
    printf("%d \n", p[i]);
  }
  free(p);
  return 0;
}
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long gcd(unsigned long long x, 
                       unsigned long long y) {
  unsigned long long q;
  if (!x || !y) return 0;

  if (y > x) {
    unsigned long long bucket = x;
    x = y;
    y = bucket;
  }
  while (1) {
    q = x % y;
    x = y;
    if (q == 0) break;
    y = q;
  } 
  return y;
}

#ifndef TEST
int main() {
  unsigned long long x = 0, y = 0, g;
  int res;

  res = scanf("%llu %llu", &x, &y);
  assert(res == 2);
  g = gcd(x, y);
  printf("%llu\n", g);
  return 0;
}
#endif

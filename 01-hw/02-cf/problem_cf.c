#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* 
  This program computes continued fraction
  Input (stdin): two positive integer values: numerator denominator
  Output (stdout): list of values that make up continued fraction
*/
int main(void)
{
  int a, b;
  int res = scanf("%d%d", &a, &b);
  if (res != 2) exit(1);
  assert(res == 2);

  // only posiitve numbers is allowed
  if (a <= 0 || b <= 0) exit(1);

  #if 0
  if (a<b) {
    int bucket = a;
    a = b;
    b = bucket;
  }
  assert(a>=b);
  #endif

  int p, q;
  while (1) {
    p = a / b;
    q = a % b;
    printf("%d", p);
    if (q == 0) break;
    printf(" ");
    a = b;
    b = q;
  }
  printf("\n");


  return 0;
}



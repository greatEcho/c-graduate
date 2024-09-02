#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, res;
  res = fscanf(stdin, "%d", &n);

  if (res != 1) {
    fprintf(stderr, "Error: input incorrect\n");
    abort();
  } 
  else if (n == 0) {
    fprintf(stderr, "Error: division by zero\n");
    abort();
  }

  fprintf(stdout, "%d\n", 720 / n);

  return 0;
}

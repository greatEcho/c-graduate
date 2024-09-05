#ifndef TEST
#define TEST

#include "minunit.h"
#include "problem_rl.c"

int tests_run = 0;

char* test_gcd()
{
  mu_assert("shoud return 5", gcd(10, 5) == 5);
  mu_assert("should return 12", gcd(36, 24) == 12);
  mu_assert("should return 4", gcd(-28, 16) == 4);
  mu_assert("should return 6", gcd(120, 66) == 6);
  return 0;
}

char* all_tests()
{
  mu_run_test(test_gcd);
  return 0;
}

int main(void)
{
  char* test_results = all_tests();

  if (test_results != 0) {
    printf("Error. Test failed. Msg: %s\n", test_results);
  }
  else {
    printf("All tests passed! (%i total tests)\n", tests_run);
  }

  return 0;
}
#endif // TEST

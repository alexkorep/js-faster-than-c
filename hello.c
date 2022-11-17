#include <stdio.h>

unsigned long long g(void) { return 1; }
unsigned long long f(void) { return 1; }

unsigned long long (*fun_ptr)(void) = &g;

int main(int argc, char **argv)
{
  if (argc > 1) {
    fun_ptr = &g;
  } else {
    fun_ptr = &f;
  }
  unsigned long long i, j, ret = 0;
  for (i = 0; i < 40; i++)
    for (j = 0; j < 1000000000U; j++)
      ret += (*fun_ptr)();
  printf("%llu\n", ret);
  return ret;
}

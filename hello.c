// To compile
// gcc -Ofast -flto ./hello.c -o hello
// To profile:
// time ./hello

#include <stdio.h>


unsigned int g(void) { return 1; }
unsigned int f(void) { return 1; }

unsigned int (*fun_ptr)(void) = &g;

int main(int argc, char **argv)
{
  if (argc > 1) {
    fun_ptr = &g;
  } else {
    fun_ptr = &f;
  }
  unsigned int i, j, ret = 0;
  for (i = 0; i < 40; i++)
    for (j = 0; j < 1000000000U; j++)
      ret += (*fun_ptr)();
  return ret;
}
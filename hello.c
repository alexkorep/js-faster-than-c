// To compile
// gcc -Wall -O3 hello.c -o hello
// To profile:
// time ./hello
unsigned int g(void) { return 1; }

unsigned int (*fun_ptr)(void) = &g;

int main(void)
{
  unsigned int i, j, ret = 0;
  for (i = 0; i < 40; i++)
    for (j = 0; j < 1000000000U; j++)
      ret += (*fun_ptr)();
  return ret;
}
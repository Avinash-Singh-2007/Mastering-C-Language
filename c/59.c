#include <stdio.h>

int main()
{

  int a = 9, *p;
  p = &a;

  printf("%d\n", a);
  printf("%d", *p);
  return 0;
}
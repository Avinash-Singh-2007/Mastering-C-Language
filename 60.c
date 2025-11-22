#include <stdio.h>

int main()
{

  int a = 9, *p;
  p = &a;
  printf("\nBefore : ");
  printf("%d\n", a);

  *p = *p +1;

 printf("\nAfter : ");
  printf("%d\n", a);
return 0;
}
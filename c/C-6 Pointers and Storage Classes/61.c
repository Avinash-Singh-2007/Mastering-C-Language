#include <stdio.h>

int main()
{

  char a, *p;
  p = &a;

  printf("Enter a : ");
  scanf("%c",p);

  printf("A: %c",*p);
  return 0;
}
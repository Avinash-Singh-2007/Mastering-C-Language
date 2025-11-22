#include <stdio.h>

int main()
{
  int a;
  printf("Enter number : ");
  scanf("%d", &a);

  a%2==0 ? printf("%d is even",a) : printf("%d is odd",a);
}
#include <stdio.h>

int main()
{

  int n;
  printf("Enter number : ");
  scanf("%d", &n);
int n_copy= n;
  int result = 0;

  while (n_copy != 0)
  {
    int last_digit = n_copy % 10;
    n_copy /= 10;
    result = result * 10 + last_digit;
  }

  printf("Reverse of %d is %d", n, result);

  return 0;
}
#include <stdio.h>

int main()
{

  int n;
  printf("Enter number : ");
  scanf("%d", &n);
  int n_copy = n;
  int result = 0;

  while (n_copy != 0)
  {
    int last_digit = n_copy % 10;
    n_copy /= 10;
    result = result * 10 + last_digit;
  }

  n == result ? printf("%d is palindrome", n) : printf("%d is not palindrome", n);

  return 0;
}
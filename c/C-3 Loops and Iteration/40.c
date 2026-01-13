#include <stdio.h>

int c_pow(int digit, int digits)
{
  int result = 1;
  for (int i = 0; i < digits; i++)
  {
    result *= digit;
  }
  return result;
}

int main()
{
  int num, original, digits = 0, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  original = num;
  int temp = num;
  while (temp != 0)
  {
    digits++;
    temp /= 10;
  }

  temp = num;
  while (temp != 0)
  {
    int digit = temp % 10;
    sum += c_pow(digit, digits);
    temp /= 10;
  }

  if (sum == original)
    printf("%d is an Armstrong number\n", original);
  else
    printf("%d is not an Armstrong number\n", original);

  return 0;
}

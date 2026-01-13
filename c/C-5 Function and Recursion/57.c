#include <stdio.h>

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  int n;
  printf("Enter number to print that time of fibonacci : ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", fibonacci(i));
  }

  int num;
  printf("\nEnter number to print less than or till that fibonacci : ");
  scanf("%d", &num);
  int j = 0;
  int i;
  while (1)
  {
    i = fibonacci(j);
    if (i <= num)
    {
      printf("%d ", fibonacci(j));
      j++;
    }
    else{
      break;
    }
  }
}
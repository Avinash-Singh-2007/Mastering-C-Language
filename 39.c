#include <stdio.h>

int main()
{

  // Method 1

  int n;
  printf("Enter how many fibonacci to be print : ");
  scanf("%d", &n);
  if (n <= 0)
  {
    printf("Enter valid no\n");
    return 0;
  }
  if (n >= 1)
  {
    printf("0 ");
  }
  if ((n >= 2))
  {
    printf("1 ");
  }

  int first = 0;
  int second = 1;

  for (int i = 3; i <= n; i++)
  {
    int sum = first + second;
    printf("%d ", sum);
    first = second;
    second = sum;
  }

  // Method 2
  int num;
  printf("\nEnter num till fibonacci to be print : ");
  scanf("%d", &num);
  if (num < 0){
    printf("Invalid number");
    return 0;
}
  if (num >= 0)
    printf("0 ");
  if (num >= 1)
    printf("1 ");
  int f = 0;
  int s = 1;
  int i = f + s;
  while (i <= num)
  {
    printf("%d ", i);
    f = s;
    s = i;
    i = f + s;
  }

  return 0;
}

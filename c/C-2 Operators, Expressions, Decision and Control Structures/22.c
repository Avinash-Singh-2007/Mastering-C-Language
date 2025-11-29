#include <stdio.h>

int main()
{
  int year;
  printf("Enter Year : ");
  scanf("%d", &year);

  if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
  {
    printf("Year is leap year");
  }
  else
  {
    printf("Year is not leap year");
  }
  return 0;
}
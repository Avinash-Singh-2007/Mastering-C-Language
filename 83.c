#include <stdio.h>
#include <string.h>

int main()
{

  char str[20];
  printf("Enter String: ");
  scanf(" %19s",str);

  int len = strlen(str);
  int i = 0, j = len - 1;
  while (i < j)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }

  printf("After reveres: %s",str);

  return 0;
}
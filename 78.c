#include <stdio.h>
int main()
{
  char str[20];
  printf("Enter string : ");
  fgets(str,sizeof(str),stdin);

  printf("Str : ");
  puts(str);

  return 0;
}
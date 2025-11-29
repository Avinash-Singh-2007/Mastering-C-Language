#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  printf("Enter string: ");
  fgets(str, sizeof(str), stdin);

  int start = 0, end = strlen(str) - 1;
  while (str[start] == ' ')
    start++;
  while (str[end] == ' ' || str[end] == '\n')
    end--;

    int len= end-start+1;
  char newstr[len + 1];
  newstr[len] = '\0';

  for (int i = 0; i < len; i++)
  {
    newstr[i] = str[start];
    start++;
  }

  printf("New String : /%s/", newstr);
  return 0;
}

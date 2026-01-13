#include <stdio.h>

int main()
{
  FILE *ptr;
  ptr = fopen("file.txt", "r");
  if (ptr == NULL)
  {
    printf("file not exist");
    return 1;
  }

  int ch;
  int arr[100];
  int i = 0;
  while (i < 100 && (ch=fgetc(ptr) != EOF))
  {
     arr[i] = ch;
    i++;
  }

  int sum = 0;

  for (int j = 0; j < i; j++)
  {
    sum += arr[j];
  }

  printf("Sum: %d", sum);


  fclose(ptr);

  return 0;
}
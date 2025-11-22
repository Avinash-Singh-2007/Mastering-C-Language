#include <stdio.h>

int main()
{

  int length, breadth;
  printf("Enter length : ");
  scanf("%d", &length);
  printf("Enter breadth : ");
  scanf("%d", &breadth);

  printf("Perimeter : %d cm", 2 * (length + breadth));
  return 0;
}
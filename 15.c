#include <stdio.h>

int main()
{

  int base, height;
  printf("Enter base : ");
  scanf("%d", &base);
  printf("Enter height : ");
  scanf("%d", &height);

  printf("Perimeter : %.2f cm^2",0.5*base*height );
  return 0;
}
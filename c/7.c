#include <stdio.h>

int main(){

  int side;
  printf("Enter side in cm : ");
  scanf("%d",&side);

  int area = side * side;

  printf("Side : %d , Area : %d cm^2",side,area);
  return 0;
}
#include <stdio.h>

int main(){

  int a,b;
  printf("Enter a : ");
  scanf("%d",&a);
  printf("Enter b : ");
  scanf("%d",&b);

  printf("Before a : %d , Before b : %d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
printf("\n");
  printf("After a : %d , After b : %d",a,b);
  return 0;
}
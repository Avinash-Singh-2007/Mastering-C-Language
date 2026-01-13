#include <stdio.h>

int main(){

  int number_1,number_2;
  printf("Enter number 1 : ");
  scanf("%d",&number_1);
  printf("Enter number 2 : ");
  scanf("%d",&number_2);

  printf("Sum : %d\n",number_1+number_2);
  printf("Difference : %d\n",number_1-number_2);
  printf("Product : %d\n",number_1*number_2);
  printf("Division : %.2f",(float)number_1/(float)number_2);
  return 0;
}
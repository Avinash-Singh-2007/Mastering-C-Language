#include <stdio.h>
#include <math.h>
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);
  int i = 2;
  int flag =0;
  while (i <= num/2)
  {
    if (num % i == 0)
    {
      flag++;
      break;
    }
    i++;
  }

  if(flag){
    printf("%d is not Prime",num);
  }else{
    printf("%d is Prime",num);
  }
  return 0;
}
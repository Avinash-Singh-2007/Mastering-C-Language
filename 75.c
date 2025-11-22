#include <stdio.h>

int main(){

  int arr[3][3] = {{2,3,4},{21,34,45},{222,1234,23456}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

  int n,flag=0;
  printf("Enter element to search : ");
  scanf("%d",&n);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(n==arr[i][j]){
        printf("\nElement is there");
        flag=1;
      }
    }
  }

  if(flag==0){
    printf("Element is not there");
  }
  
  return 0;
}
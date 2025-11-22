#include <stdio.h>

int main(){

  int arr[] = {1,2,3,4,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
sum += arr[i];
  }
  float average = (float)sum/size;

  printf("Sum : %d\n",sum);
  printf("Average : %.2f",average);
  
  return 0;
}
#include <stdio.h>

int main(){

  int arr[3][3] = {{2,3,4},{21,34,45},{222,1234,23456}};

   int sum=0;
   float average;

   for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum += arr[i][j];
    }
  }

  average = sum / 9.0;

  printf("Sum : %d , Average : %f",sum,average);

  return 0;
}
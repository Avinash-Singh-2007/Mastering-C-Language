#include <stdio.h>

float max(float num1,float num2){
  return num1>num2 ? num1: num2;
}

int main(){

  float result = max(3.23,4.56);

  printf("Max is %.2f",result);
  return 0;
}
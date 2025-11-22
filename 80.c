#include <stdio.h>
#include <string.h>
int main(){

  char str[50];
  printf("Enter String: ");
  scanf("%49s",str);

  strupr(str);
  printf("String : %s",str);
  return 0;
}
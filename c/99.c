#include <stdio.h>
int main()
{
  char str[20];
  printf("Enter file name: ");
  scanf("%s", str);
  FILE *ptr;
  ptr = fopen(str,"r");
  
  if(ptr != NULL){
    printf("%s opened succesfully",str);
  }
  else{
    printf("%s not exist",str);
  }
  
  return 0;
}
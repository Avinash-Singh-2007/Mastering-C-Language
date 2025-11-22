#include <stdio.h>
#include <string.h>

int main(){
char input[20];

do
{
  printf("Enter str: ");
  scanf("%s",input);
  if(strcmp(input,"exit")==0){
  printf("Successfully exit");
  break;
}
}
while (1);

 return 0;
}
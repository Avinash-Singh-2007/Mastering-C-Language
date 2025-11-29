#include <stdio.h>
#include <string.h>

int main(){

char password[]= "Avinash@123";

char input[20];

do
{
  printf("Enter password : ");
  scanf("%s",input);
  if(strcmp(input,password)==0){
  printf("Successfully login");
  break;
}
printf("Invalid Password, Try again\n");
}
while (1);

 return 0;
}
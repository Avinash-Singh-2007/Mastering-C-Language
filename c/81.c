#include <stdio.h>
#include <string.h>

int main(){

char password[]= "Avinash@123";

char input[20];

while (1)
{
  printf("Enter password : ");
  scanf("%s",input);
  if(strcmp(input,password)==0){
  printf("Successfully login");
  break;
}
printf("Invalid Password, Try again\n");
}



  return 0;

}
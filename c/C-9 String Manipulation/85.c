#include <stdio.h>
#include <string.h>

int main()
{

  char str[20];
  printf("Enter String: ");
  scanf(" %19s",str);

  int len = strlen(str);
  char newstr[len];
  for(int i=0;i<len;i++){
      newstr[i]= str[len-i-1];
  }

  newstr[len]='\0';

  printf("After reverse: %s\n",newstr);
  if(strcmp(str,newstr)==0){
    printf("Palindrome");
  }else{
    printf("Not Palindrome");
  }

  return 0;
}
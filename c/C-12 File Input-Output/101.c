#include <stdio.h>
int main(){
    FILE *ptr = fopen("file.txt","r");
    if(ptr==NULL){
        printf("File not found");
        return 1;
    }
    FILE *ptr2 = fopen("file-copy.txt","a");
    
    char c;
    while((c = fgetc(ptr)) != EOF){
            fputc(c,ptr2);
    }

  fclose(ptr);
  fclose(ptr2);

    return 0;
}
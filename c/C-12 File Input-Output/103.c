#include <stdio.h>

int main() {
    FILE *ptr = fopen("./file.txt", "a");
    if (ptr == NULL) {
        printf("File not found");
        return 1;
    }

    char str[100];

    printf("Enter input: ");
    fgets(str, sizeof(str), stdin);
    fprintf(ptr, "%s", str); 

    fclose(ptr);
    return 0;
}

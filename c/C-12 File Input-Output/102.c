#include <stdio.h>

int main() {
    FILE *ptr = fopen("file.txt", "a");
    if (ptr == NULL) {
        printf("File not found");
        return 1;
    }

    char str[100];

    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(str, sizeof(str), stdin);
        fprintf(ptr, "%s", str); 
    }

    fclose(ptr);
    printf("Names written to file successfully\n");
    return 0;
}

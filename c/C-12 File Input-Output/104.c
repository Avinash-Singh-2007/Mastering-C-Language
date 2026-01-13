#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char buffer[100];
    
    // Writing to file
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a test file.\n");
    fprintf(file, "File I/O in C\n");
    fclose(file);
    
    printf("Data written to data.txt\n\n");
    
    // Reading from file
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    printf("Reading from data.txt:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    
    return 0;
}
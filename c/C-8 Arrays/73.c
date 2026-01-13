#include <stdio.h>

void copyArray(char *src, char *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);  // pointer arithmetic
    }
}

int main() {
    char src[] = "HelloWorld";
    int size = sizeof(src);  // include null terminator
    char dest[size];

    copyArray(src, dest, size);

    printf("Source array: %s\n", src);
    printf("Copied array: %s\n", dest);

    return 0;
}


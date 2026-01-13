#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int u = UINT_MAX;
    int i = INT_MAX;

    printf("Initial unsigned int value = %u\n", u);
    printf("Initial int value = %d\n", i);

    u = u + 1;
    i = i + 1;

    printf("After adding 1:\n");
    printf("Unsigned int = %u\n", u);
    printf("Int = %d\n", i);

    return 0;
}

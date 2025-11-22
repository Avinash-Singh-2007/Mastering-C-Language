#include <stdio.h>

void increment(int n) {
    n = n + 1;
    printf("Inside function: %d\n", n);
}

int main() {
    int x = 10;
    increment(x);
    printf("Outside function: %d\n", x);
    return 0;
}

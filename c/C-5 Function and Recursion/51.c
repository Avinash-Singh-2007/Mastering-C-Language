#include <stdio.h>

int add(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int result = add(2, 4, 6, 8);
    printf("Sum: %d\n", result);
    return 0;
}

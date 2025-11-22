#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Both numbers are equal");
    else
        printf("%d is greater than %d", a > b ? a : b, a < b ? a : b);

    return 0;
}

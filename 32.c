#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter a number N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0)
            sum += i;
    }

    printf("Sum of odd numbers from 1 to %d = %d\n", N, sum);
    return 0;
}
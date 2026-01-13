#include <stdio.h>

int main() {
    int num=20;
    long long fact = 1;
    long facto =1;

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
            facto *=i;
        }
        printf("Factorial of %d by long long use = %lld \n", num, fact);
        printf("Factorial of %d by long use = %ld \n", num, facto);
    }

    return 0;
}

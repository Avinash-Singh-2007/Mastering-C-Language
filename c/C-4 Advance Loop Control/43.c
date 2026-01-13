#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Invalid input! Please try again.\n");
        }

    } while (num <= 0);

    printf("You entered a valid positive number: %d\n", num);

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter an integer (-1 to exit): ");
        scanf("%d", &num);

        if (num == -1) 
            break;

        printf("Square of %d is %d\n", num, num * num);
    }

    return 0;
}

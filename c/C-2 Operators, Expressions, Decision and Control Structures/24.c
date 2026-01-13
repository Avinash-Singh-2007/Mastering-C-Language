#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 13)
        printf("Category: Child\n");
    else if (age < 20)
        printf("Category: Teen\n");
    else if (age < 60)
        printf("Category: Adult\n");
    else
        printf("Category: Senior\n");

    return 0;
}

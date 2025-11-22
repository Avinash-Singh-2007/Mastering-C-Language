#include <stdio.h>

int main() {
    long km;
    float miles;

    printf("Enter km: ");
    scanf("%ld", &km);

    miles = km * 0.621371; // 1 km = 0.621371 miles

    printf("%ld km = %.2f miles\n", km, miles);

    return 0;
}

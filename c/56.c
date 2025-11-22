#include <stdio.h>

float get_average(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e) / 5.0;
}

int main() {
    float avg = get_average(10, 20, 30, 40, 50);
    printf("Average: %.2f\n", avg);
    return 0;
}

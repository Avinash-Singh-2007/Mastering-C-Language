#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2fC\n", c);
    return 0;
}

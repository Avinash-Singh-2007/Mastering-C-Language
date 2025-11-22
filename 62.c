#include <stdio.h>

void minmax(int *a, int *b, int *min, int *max) {
    if (*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}

int main() {
    int x, y, min, max;

    x = 10; y = 20;
    minmax(&x, &y, &min, &max);
    printf("x=%d, y=%d  min=%d, max=%d\n", x, y, min, max);

    x = 45; y = 12;
    minmax(&x, &y, &min, &max);
    printf("x=%d, y=%d  min=%d, max=%d\n", x, y, min, max);

    x = 7; y = 7;
    minmax(&x, &y, &min, &max);
    printf("x=%d, y=%d  min=%d, max=%d\n", x, y, min, max);

    return 0;
}

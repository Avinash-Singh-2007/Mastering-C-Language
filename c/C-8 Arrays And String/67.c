#include <stdio.h>

int main() {
    int arr[100], n, key, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find occurrences: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    printf("Element %d occurs %d times in the array.\n", key, count);

    return 0;
}

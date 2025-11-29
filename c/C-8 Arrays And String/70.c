#include <stdio.h>

int main()
{
    int arr[10] = {12, 45, 7, 23, 89, 5, 67, 34, 2, 90};
    int m=10,n = 10;
    int del;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter element to delete: ");
    scanf("%d", &del);

    int i = 0;
    while (i < n)
    {
        if (arr[i] == del)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }

    if (m == n)
    {
        printf("Element not found");
    }
    else
    {
        printf("Array after deletion: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

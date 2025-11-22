#include <stdio.h>

int main()
{
    int arr[10] = {12, 45, 7, 23, 89, 5, 67, 34, 2, 90};
    int n = 10;
    int del;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int i=0,j=n-1;
    while (i<j)
    {
      arr[i]=arr[i]+arr[j];
      arr[j]=arr[i]-arr[j];
      arr[i]=arr[i]-arr[j];
      i++;
      j--;
    }
    
    printf("Reveresed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

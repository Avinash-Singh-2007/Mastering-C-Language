#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);

  float *arr = (float *)malloc(n * sizeof(float));
  ;
  for (int i = 0; i < n; i++)
  {
    printf("Enter value at element %d", i + 1);
    scanf("%f", &arr[i]);
  }

  
  for (int i = 0; i < n; i++)
  {
    printf("%f ", arr[i]);
  }

  free(arr);

  return 0;
}
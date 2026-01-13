#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Enter size of Array: ");
  scanf("%d", &n);
  int *arr = (int *) calloc(n, sizeof(int));
  for(int i=0;i<n;i++){
    printf("Enter value of element %d : ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Before: ");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }

  arr = realloc(arr,sizeof(int) * (n/2));

  printf("\nAfter: ");
  for(int i=0;i<n/2;i++){
    printf("%d ",*(arr+i));
  }

  return 0;
}
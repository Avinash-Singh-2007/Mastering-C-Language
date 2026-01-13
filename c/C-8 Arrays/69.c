#include <stdio.h>
#include <stdbool.h>

bool check_ascending_sorting(int arr[], int size)
{

  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
}

bool check_descending_sorting(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i] < arr[i + 1])
    {
      return false;
    }
  }
  return true;
}

bool check_sorted(int arr[], int size)
{
  bool is_sorted = check_ascending_sorting(arr, size) || check_descending_sorting(arr, size);

  return is_sorted;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  int size = sizeof(arr) / sizeof(arr[0]);
  bool is_sorted = check_sorted(arr, size);

  if (is_sorted)
  {
    printf("Array is sorted");
  }
  else
  {
    printf("Array is not sorted");
  }
  return 0;
}

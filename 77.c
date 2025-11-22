#include <stdio.h>

int left_diagonal_sum(int arr[3][3], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i][i];
  }
  return sum;
}

int right_diagonal_sum(int arr[3][3], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    int j = size - i - 1;
    sum += arr[i][j];
  }
  return sum;
}

int sum_of_diagonal(int arr[3][3], int size)
{
  int sum = left_diagonal_sum(arr, size) + right_diagonal_sum(arr, size);
  if (size % 2 != 0)
  {
    int center = size / 2;
    sum -= arr[center][center];
  }
  return sum;
}

int main()
{

  int arr[3][3] = {{2, 3, 4}, {21, 34, 45}, {222, 1234, 23456}};

  int size = 3;
  int sum_of_diagonals = sum_of_diagonal(arr, size);
  printf("Sum of diagonals : %d", sum_of_diagonals);
  return 0;
}
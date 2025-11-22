#include <stdio.h>

int main()
{

  char arr[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

  int i = 1;
  int row, column,win=0;
  while (i < 10)
  {
    if (i % 2 == 0)
    {
      printf("User 2 turn(X) : \n");
    }
    else
    {
      printf("User 1 turn(0) : \n");
    }

    printf("Enter row number: ");
    scanf(" %d", &row);
    printf("Enter column number: ");
    scanf(" %d", &column);

    if (row < 1 || row > 3 || column < 1 || column > 3)
    {
      printf("Invalid position! Try again.\n\n");
      continue;
    }

    char value = arr[row - 1][column - 1];

    if (value == ' ')
    {
      arr[row - 1][column - 1] = i % 2 == 0 ? 'X' : '0';
      printf("\n\n");
    }
    else
    {
      printf("Already played there\n\n");
      continue;
    }

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        printf(" %c ", arr[i][j]);
        if (j < 2)
        {
          printf("|");
        }
      }
      printf("\n");
      if (i < 2)
      {
        printf("---+---+---\n");
      }
    }

    printf("\n\n");

    if (
        (arr[0][0] + arr[0][1] + arr[0][2] == 144 || arr[0][0] + arr[0][1] + arr[0][2] == 264) ||
        (arr[1][0] + arr[1][1] + arr[1][2] == 144 || arr[1][0] + arr[1][1] + arr[1][2] == 264) ||
        (arr[2][0] + arr[2][1] + arr[2][2] == 144 || arr[2][0] + arr[2][1] + arr[2][2] == 264) ||

        (arr[0][0] + arr[1][1] + arr[2][2] == 144 || arr[0][0] + arr[1][1] + arr[2][2] == 264) ||
        (arr[0][2] + arr[1][1] + arr[2][0] == 144 || arr[0][2] + arr[1][1] + arr[2][0] == 264) ||

        (arr[0][0] + arr[1][0] + arr[2][0] == 144 || arr[0][0] + arr[1][0] + arr[2][0] == 264) ||
        (arr[0][1] + arr[1][1] + arr[2][1] == 144 || arr[0][1] + arr[1][1] + arr[2][1] == 264) ||
        (arr[0][2] + arr[1][2] + arr[2][2] == 144 || arr[0][2] + arr[1][2] + arr[2][2] == 264))

    {
    win=1;
      if (i % 2 == 0)
      {
        printf("User 2 won");
      }
      else
      {
        printf("User 1 won");
      }
      break;
    }
    i++;
  }

  if(win!=1){
    printf("Draw");
  }
  return 0;
}
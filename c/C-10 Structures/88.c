#include <stdio.h>
int main()
{

  char book1_title[20];
  char book1_author[20];
  int book1_price;

  char book2_title[20];
  char book2_author[20];
  int book2_price;

  struct Books
  {
    char title[20];
    char author[20];
    int price;
  };

  struct Books book[5];

  return 0;
}
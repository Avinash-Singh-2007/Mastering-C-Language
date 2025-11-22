#include <stdio.h>
int main()
{
  struct Books
  {
    char title[20];
    char author[20];
    int price;
  };

  struct Books book[3] = {
      {"Why", "Av", 20000}, {"Why not", "Me", 200000}, {"Hello world", "Ramesh", 100}};

  for (int i = 0; i < 3; i++)
  {
    printf("Title: %s, Author: %s, Price: %d\n", book[i].title, book[i].author, book[i].price);
  }

  return 0;
}
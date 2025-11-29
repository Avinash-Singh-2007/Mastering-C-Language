#include <stdio.h>
struct Book{
    char title[20];
    char author[20];
    int price;
  };
struct Student
{
  int id;
  char name[20];
  int roll_no;
  struct Book Books;
};

void printdetail(struct Student *ptr){
  printf("Id: %d\nName: %s\nRollno: %d\nBook Boorowed:\nTitle: %s\nAuthor: %s\nPrice: %d\n",
  ptr->id,ptr->name,ptr->roll_no,ptr->Books.title,ptr->Books.author,ptr->Books.price);
}
int main()
{
  struct Student s1 = {101, "Avinash", 43, {"Why", "Havard", 200}};
  struct Student *ptr = &s1;
  printdetail(ptr);
}
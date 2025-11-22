#include <stdio.h>
struct Student
{
int id;
char name[20];
int year;
float gpa;    
};

void change_grade(struct Student *ptr){
ptr->gpa= 9.26;
}

int main(){

  struct Student s1 = {101,"Avinash",2020,9.52};

  struct Student *ptr = &s1;
  change_grade(ptr);

  printf("Grade: %.2f",s1.gpa);
  return 0;
}
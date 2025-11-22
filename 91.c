#include <stdio.h>

  struct Car
  {
    char make[20];
    char model[20];
    int year;
    char color[20];
  };
void showdetail(struct Car c){
printf("Make: %s, Model: %s, Year: %d, Colour: %s",c.make,c.model,c.year,c.color);
}
void showdetailptr(struct Car *p){
printf("Make: %s, Model: %s, Year: %d, Colour: %s",p->make,p->model,p->year,p->color);
}
int main()
{
  struct Car c1 ={"Toyota","Fortuner",2023,"Black"};

  printf("By Pointer : \n");
  struct Car *ptr = &c1;
  showdetailptr(ptr);

  printf("\nBy copy: \n");
  showdetail(c1);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct coordinate
{
  float x;
  float y;
};


int main(){

  struct coordinate *c1 = (struct coordinate*) malloc(sizeof(struct coordinate));
  if(c1==NULL)printf("Memory not allocated");

  c1->x=5.3;
  c1->y=6.4;

  printf("X: %.2f, Y: %.2f",c1->x,c1->y);

  free(c1);
  return 0;
}
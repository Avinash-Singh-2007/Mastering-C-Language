#include <stdio.h>

int main(){
  const double PI = 3.14159;
  double radius;
  printf("Enter radius in cm : ");
  scanf("%lf",&radius);

  double area = PI * radius * radius;
  printf("Area of Circle with radius %.2lf is %.2lf cm",radius,area);
  return 0;
}
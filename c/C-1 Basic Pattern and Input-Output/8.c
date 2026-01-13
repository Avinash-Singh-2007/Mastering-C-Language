#include <stdio.h>

int main(){
  const double PI = 3.14159;
  double radius;
  printf("Enter radius in cm : ");
  scanf("%lf",&radius);

  double circumference = 2 * PI * radius;
  printf("Circumference of Circle with radius %.2lf is %.2lf cm",radius,circumference);
  return 0;
}
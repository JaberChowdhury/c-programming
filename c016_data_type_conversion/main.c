#include <stdio.h>

int main() {
  int x = 5 / 2;
  printf("print x as int %d\n", x);
  // printf("print x as float %f\n", x);
  printf("print x as char %c\n", x);
  // printf("print x as double %lf\n", x);

  float y = 5 / 2;
  printf("print y as float %f\n", y);
  // printf("print y as int %d\n", y);
  // printf("print y as char %c\n", y);
  printf("print y as double %lf\n", y);

  double z = 5 / 2;
  printf("print z as double %lf\n", z);
  printf("print z as float %f\n", z);
  // printf("print z as int %d\n", z);
  // printf("print z as char %c\n", z);

  // Explicit conversion
  int meal = 101;
  int person = 42;
  float total_fee = (float)meal * person;

  printf("Your total fee is %.1f\n", total_fee);

  return 0;
}

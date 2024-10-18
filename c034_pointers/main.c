#include <stdio.h>

int main() {
  int number = 1089;
  int *pointer_number = &number;

  printf("%d\n", number);
  printf("%p\n", pointer_number);
  printf("%p\n", &number);
  return 0;
}
#include <stdio.h>

int main() {
  int value1, value2;
  char math_operator;
  double result;

  printf("Type your math here : ");
  scanf("%d %c %d", &value1, &math_operator, &value2);

  switch (math_operator) {
  case '*':
    result = value1 * value2;

  case '-':
    result = value1 - value2;

  case '/':
    result = value1 / value2;

  case '+':
    result = value1 + value2;

  default:
    printf("You entered wrong input\n");
  }

  printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
  printf("value1 = %d\n", value1);
  printf("operator = %c\n", math_operator);
  printf("value2 = %d\n", value2);
  printf("Result = %lf\n", result);
  printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");

  return 0;
}
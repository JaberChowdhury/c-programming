#include <ctype.h>
#include <stdio.h>
#include <string.h>

int detect_operator(char ch) {
  char special_chars[] = "*/+-";
  return strchr(special_chars, ch) != NULL;
}

double calculate_math(char math_operator, int value1, int value2) {
  switch (math_operator) {
  case '*':
    return value1 * value2;

  case '/':
    if (value2 != 0) {
      return value1 / value2;
    } else {
      printf("Error: Division by zero!\n");
      return 0;
    }
  case '+':
    return value1 + value2;

  case '-':
    return value1 - value2;

  default:
    printf("Error: Unknown operator!\n");
    return 0;
  }
}

void solve_math(char math[]) {
  int value1, value2;
  char math_operator = '\0';

  sscanf(math, "%d %*c %d", &value1, &value2);

  for (int i = 0; i < strlen(math); i++) {
    char current_char = math[i];
    if (detect_operator(current_char)) {
      math_operator = current_char;
      break;
    }
  }

  if (math_operator == '\0') {
    printf("Error: No operator found!\n");
    return;
  }

  int result =
      calculate_math(math_operator, value1, value2); // Add missing semicolon

  printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
  printf("The math is :------ %s\n", math);
  printf("Value1 is :-------- %d\n", value1);
  printf("Value2 is :-------- %d\n", value2);
  printf("Result is :-------- %d\n", result); // Print the result
  printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

int main() {
  solve_math("10*10");
  solve_math("10869*8710");
  solve_math("10/8710");
  return 0;
}
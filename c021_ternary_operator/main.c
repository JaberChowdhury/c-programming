#include <stdio.h>

int main() {
  const int x = 250;
  const int y = 22;

  (x < 30) ? printf("X is less than 30\n") : printf("X is not less than 30\n");

  (x < y)   ? printf("X is less than y %d\n", y - x)
  : (x > y) ? printf("X is greater than y %d\n", x - y)
            : printf("X is equal to y");

  return 0;
}

#include <stdio.h>

int main() {
  const int x = 10;
  if (x > 11) {
    printf("X is greater than 11");
  } else if (x == 11) {
    printf("X is equal to 11");
  } else {
    printf("X is less than 11");
  }

  return 0;
}

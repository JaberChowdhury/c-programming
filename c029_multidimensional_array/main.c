#include <stdio.h>

int main() {
  int x[2][3] = {{18, 76, 97}, {28, 57, 89}};

  x[0][2] = 100;

  int a, b;
  for (a = 0; a < 2; a++) {
    for (b = 0; b < 3; b++) {
      printf("%d\n", x[a][b]);
    }
  }

  return 0;
}

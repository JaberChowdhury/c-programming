#include <stdio.h>

int main() {
  const int score[] = {17, 86, 8, 67, 7, 888, 767};
  printf("%d\n", score[0]);

  int i;
  for (i = 0; i < 7; i++) {
    printf("%d\n", score[i]);
  }

  printf("The size of this array is %lu\n", sizeof(score)); // output is 28

  /*
   * Th size of int data type is 4 bytes.
   * That array have 7 element.
   * So 4 byte * 7 element = 28 bytes.
   * thats why the output will be 28
   */

  return 0;
}

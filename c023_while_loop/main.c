#include <stdio.h>

int main()
{
  int x = -96;
  while(x < 6){
    printf("%d\n", x);
    // x++;
    ++x;
  }


  int sum = 0;
  while (sum < 10) {
    printf("Total sum is %d\n", sum);
    sum ++;
    // printf("%d\n", sum);
  }

  return 0;
}

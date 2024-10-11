#include <stdio.h>

int main()
{
  int i;
  for(i = 0; i<10000; i++){
    printf("The value of i is now %d\n", i);
    float y = (float) i / 2;
    printf("if i divided by 2 than ans is %f\n", y);
  }
  return 0;
}

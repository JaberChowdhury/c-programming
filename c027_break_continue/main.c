#include <stdio.h>

int main()
{
  int x, y = 10;
  
  for(x = 0; x <= 10; x++){
    if(x>=6){
      break;
    }
    printf("The value of x is %d\n", x);
  }
  
  int i;

  for (i = 0; i < 10; i++) {
      if (i == 4) {
          continue;
      }
      printf("%d\n", i);
  }

  return 0;
}

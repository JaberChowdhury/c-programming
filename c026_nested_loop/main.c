#include <stdio.h>

int main()
{
  int x,y;
  
  for(x = 0; x < 10; x++){
    printf("This is outer loop where x = %d\n",x);
    for(y = 0; y < 10; y++){
      printf("🥕This is inner loop where y = %d\n",y);
    }
  }

  return 0;
}

#include <stdio.h>


int main()
{
  const int score [] = {17,86,8,67,7,888,767};
  printf("%d\n", score[0]);
  
  int i;
  for(i = 0; i < 7; i++){
    printf("%d\n", score[i]);
  }

  return 0;
}

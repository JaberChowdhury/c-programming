#include <stdio.h>

int main()
{
  int a = 5, b= 8, c = 2;
  int result = a > b ? a : (b % c == 0 ? b : c);
  printf("%d", result);
  return 0;
}

#include <stdio.h>

int main()
{
  int myAge = 10;
  myAge = 21;
  printf("%d\n", myAge);
  
  int value1 = 1000;
  int value2 = value1;
  printf("This is value2 %d\n", value2);
  
  
  char name = 'B';
  char Country;
  Country = name;
  printf("My country name starts with %c\n", Country);
  
  
  
  int x = 10;
  int y = 20;
  int sum = x + y;
  printf("Total sum is %d\n", sum);
  
  return 0;
}
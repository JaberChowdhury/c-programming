#include <stdio.h>

int main()
{
  int number_array[21] = {
    18,86,88,
    87,56,39,
    57,88,67,
    78,22,10,
    19,67,88,
    87,56,29,
    57,88,67,
  };
  
  for(int x = 0; x < 21; x++){
    printf("%p\n", &number_array[x]);
  }
    printf("%lu\n", sizeof(number_array));
  return 0;
}
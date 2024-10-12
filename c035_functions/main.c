#include <stdio.h>


void print_name_age(char name [] , int age)
{
  printf("Hello %s", name);
  printf(".Your age is %d\n", age);
}


void pass_array(int numbers[5])
{
  for(int i=0; i<5; i++){
    printf("%d\n",numbers[i]);
  }
}


int main()
{
  print_name_age("Jaber",21);
  print_name_age("Sifat",21);
  int my_numbers[5] = {18,86,88,67,63};
  pass_array(my_numbers);
  
  return 0;
}
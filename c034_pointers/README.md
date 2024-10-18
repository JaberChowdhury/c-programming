We can get the memory address of a variable using reference operator `&`.

``` c 
#include <stdio.h>

int main() {
  int myAge = 43;
  
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  return 0;
}
```


Note that the type of the pointer has to match the type of the variable you're working with (int in our example).


There are two ways to declare pointer variables in C:

``` c 
int* myNum;
int *myNum;
```
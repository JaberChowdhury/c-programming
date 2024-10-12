``` c 
#include <stdio.h>

int main()
{
  
  const char x [] = "Hello my happy developers !! I am from Bangladesh";
  
  const char y [] = {'c','w','l','\0'};
  /*
  Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. It tells C that this is the end of the string.
  */
  
  printf("%s\n", y);
  printf("%s", x);
  
  return 0;
}
```
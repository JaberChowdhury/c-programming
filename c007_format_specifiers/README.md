Format specifiers are used together with the <b>`printf()`</b> function to tell the compiler what type of data the variable is storing. 
It is basically a placeholder for the variable value.


| Specifier | Type | Example |
|------|---------|-------------------------|
| `%d` | `int` | `printf("%d", 10);` |
| `%f` | `float` | `printf("%f", 10.603);` |
| `%c` | `char` | `printf("%c", 'x');` |



Code Example :

``` c
#include <stdio.h>

int main()
 {
   printf("%d\n", 10);
   printf("%f\n", 10.704);
   printf("%c\n", 'x');
   return 0;
 }
```
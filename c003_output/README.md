To output a value or to show/print text in terminal we will use <b>`printf()`</b> function.

When we print text we will warp that text with double quotes <b>`" "`</b>

#### many printf function

Using many `printf()` function is allowed but it doesn't insert a new line .
``` c
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is awesome!");
  return 0;
}
```


 `printf()` is a statement so we need to use <b>` ; `</b> at the end of each `printf()` 
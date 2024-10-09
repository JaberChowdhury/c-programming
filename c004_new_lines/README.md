To insert a new line we can use <b>` \n `</b> .

``` c 
#include <stdio.h>

int main()
{
  printf("C is a low level programming language\n");
  printf("and it is awesome");
  return 0;
}
```


Output multiple line with single <b>`printf()`</b> function .

``` C
#include <stdio.h>

int main()
{
  printf("C is a\n low level\n programming\n language");
  return 0;
}
```


Two `\n` characters
two `\n` characters will make a blank line.
``` c
#include <stdio.h>

int main() {
  printf("Hello World!\n\n");
  printf("I am learning C.");
  return 0;
}
```



What is \n exactly?
The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

Examples of other valid escape sequences are:

| Escape Sequence | 	Description | 
|-----------------|-------------------------|
| ` \t `  |	Creates a horizontal tab	|
| ` \\ `	| Inserts a backslash character (\)	|
| ` \" `	| Inserts a double quote character |

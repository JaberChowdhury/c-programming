#include <stdio.h>
#include <string.h>

int main() {
  const char text[] = "This is a very very big or long text that you have ever "
                      "seen in your entier life so don't forget to code daily "
                      "and keep push forward. Best of luck ";

  printf("Total length of this string is %lu\n", strlen(text));
  printf("Total size of this string is %lu\n", sizeof(text));

  return 0;
}
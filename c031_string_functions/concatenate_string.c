#include <stdio.h>
#include <string.h>

int main() {
  char text1[20] = "Hello ";
  const char text2[] = "world ! ";

  strcat(text1, text2);

  printf("%s\n", text1);

  char str1[20] = "Hello World!";
  char str2[20];
  // Copy str1 to str2
  strcpy(str2, str1);
  // Print str2
  printf("%s", str2);

  return 0;
}
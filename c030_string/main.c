#include <stdio.h>

int main() {

  const char x[] = "Hello my happy developers !! I am from Bangladesh";

  const char y[] = {'c', 'w', 'l', '\0'};
  /*
  Why do we include the \0 character at the end? This is known as the "null
  terminating character", and must be included when creating strings using this
  method. It tells C that this is the end of the string.
  */

  printf("%s\n", y);
  printf("%s\n", x);

  char message[] = "Good to see you,";
  char fname[] = "John";

  printf("%s %s!\n", message, fname);

  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W',
                      'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";

  printf("%lu\n", sizeof(greetings));  // Outputs 13
  printf("%lu\n", sizeof(greetings2)); // Outputs 13

  return 0;
}
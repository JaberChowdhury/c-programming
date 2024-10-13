## An array of small and capital letters
``` c 
#include <stdio.h>

int main() {
  char small_letter [26];
  char capital_letter [26];

  for(int i = 0; i < 26; i++) {
    small_letter[i] = 'a' + i;
    capital_letter[i] = 'A' + i;
  }

  for(int i = 0; i < 26; i++) {
    printf("🔥%c", small_letter[i]);
    printf("-----> %d\n", small_letter[i]);
    printf("%c", capital_letter[i]);
    printf("-----> %d\n", capital_letter[i]);
  }

  return 0;
}
```
#include <stdio.h>

int main()
{
  const int x = 10;
  const float y = 10.39;
  const double z = 19.28268392;
  const char f = 's';

  printf("%d\n", x);
  printf("%f\n", y);
  printf("%lf\n", z);
  printf("%c\n", f);
  

  /*
   * Best practice
   * Use uppercase to declare a variable when using const 
  */
  
  const int MY_AGE = 120;
  const char STUDENT_GRADE = 'A';

  return 0;
}

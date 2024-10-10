#include <stdio.h>

int main()
{
  int maxScore = 500;
  float user_score = 453.28;

  float user_percentage = (float) user_score / maxScore * 100.00 ;

  printf("User percentage is %.2f\n", user_percentage);

  return 0;
}

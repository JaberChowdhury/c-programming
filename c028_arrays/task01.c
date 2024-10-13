/**
 * *
 * * 🫒 Title : Problem
 * * 🫒 Description : Find the avarage value of an array
 * * 🫒 Author : Md Jaber Hossain Chowdhury
 * * 🫒 Date : 11 October 2024
 * *
 * **/

#include <stdio.h>

int main() {
  int i;
  float sum = 0;
  const float RANDOM_SCORE[] = {18.6, 23.1, 28.1,  12.4, 23.9,
                                72.4, 97.2, 282.3, 72.2, 98.2};

  int array_length = sizeof(RANDOM_SCORE) / sizeof(RANDOM_SCORE[0]);
  printf("Array length is %d\n", array_length);

  for (i = 0; i < array_length; i++) {
    sum += RANDOM_SCORE[i];
  }

  double avarage_score = sum / array_length;

  printf("The avarage score is %lf\n", avarage_score);

  return 0;
}

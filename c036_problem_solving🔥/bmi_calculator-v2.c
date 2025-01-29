// bmi calculator

#include <stdio.h>
#include <string.h>

struct bmi_stages
{
  float lower_limit;      // Lower BMI limit for the stage
  float upper_limit;      // Upper BMI limit for the stage
  const char *stage_name; // Name of the BMI stage
};

void print_Column(const char *title, float value)
{
  printf("| %-30s | %.2f |\n", title, value);
}

int main()
{
  float weight;
  float height;
  float bmi;
  struct bmi_stages stages[] = {

      {0, 18.5, "Underweight"},
      {18.5, 25, "Healthy Weight"},
      {25, 30, "Overweight"},
      {30, 35, "Class 1 Obesity"},
      {35, 40, "Class 2 Obesity"},
      {40, 100, "Class 3 Obesity (Severe Obesity)"}

  };

  printf("Please enter your weight(in kg unit) : ");
  if (scanf("%f", &weight) != 1 || weight <= 0)
  {
    printf("Invalid weight input. Please enter a positive number.\n");
    return 1;
  }

  printf("Please enter your height(in meter unit) : ");
  if (scanf("%f", &height) != 1 || height <= 0)
  {
    printf("Invalid height input. Please enter a positive number.\n");
    return 1;
  }

  bmi = weight / (height * height);

  // printf("Your bmi is :  %.2f", bmi);

  printf("\n\n\n");
  printf("-----------------------------------------------------------------\n");
  print_Column("Weight", weight);
  print_Column("Height", height);
  print_Column("BMI", bmi);
  printf("-----------------------------------------------------------------\n");

  for (int i = 0; i < 6; i++)
  {
    if (bmi >= stages[i].lower_limit && bmi < stages[i].upper_limit)
    {
      printf("-----------------------------------------------------------------\n");
      printf("Your BMI is %.2f, which is classified as: %s\n", bmi, stages[i].stage_name);
      printf("-----------------------------------------------------------------\n");
      break;
    }
  }

  return 0;
}

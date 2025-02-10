#include <stdio.h>

char *get_grade(double value)
{
    if (value >= 95.0)
        return "A+";
    else if (value >= 90.0)
        return "A";
    else if (value >= 85.0)
        return "B+";
    else if (value >= 80.0)
        return "B";
    else if (value >= 75.0)
        return "C+";
    else if (value >= 70.0)
        return "C";
    else if (value >= 65.0)
        return "D+";
    else if (value >= 60.0)
        return "D";
    else
        return "F";
}

int main()
{
    double struct_prog, digit_logi, english, math;

    printf("Please enter your mark for each course: ");
    scanf("%lf %lf %lf %lf", &struct_prog, &digit_logi, &english, &math);

    char *struct_prog_grade = get_grade(struct_prog);
    char *digit_logi_grade = get_grade(digit_logi);
    char *english_grade = get_grade(english);
    char *math_grade = get_grade(math);

    printf("Grades:\n");
    printf("Structured Programming: %s\n", struct_prog_grade);
    printf("Digital Logic: %s\n", digit_logi_grade);
    printf("English: %s\n", english_grade);
    printf("Math: %s\n", math_grade);

    return 0;
}

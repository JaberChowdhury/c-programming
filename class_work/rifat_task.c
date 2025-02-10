#include <stdio.h>

int main()
{
    float mark;
    printf("Please enter your mark in anny subject : ");
    scanf("%f", &mark);

    if (mark >= 40)
    {
        if (mark >= 80)
        {
            printf("You got A+");
        }
        else if (mark >= 70)
        {
            printf("You got A");
        }
        else if (mark >= 60)
        {
            printf("You got B");
        }
        else if (mark >= 50)
        {
            printf("You got C");
        }
        else if (mark >= 40)
        {
            printf("You got D");
        }
    }
    else
    {
        printf("You failed the exam");
    }

    return 0;
}
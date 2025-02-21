#include <stdio.h>

int main()
{
    int numbers[10];
    int limit = 10, sum = 0;
    float avarage;
    for (int a = 1; a <= limit; a++)
    {
        scanf("%d\n", &numbers[a]);
    }
    for (int i = 0; i <= limit; i++)
    {
        sum += numbers[i];
    }
    printf("Sum of 10 numbers: %d\n", sum);
    avarage = (float)sum / 10;
    printf("Avarage of 10 numbers: %f\n", avarage);
    return 0;
}

#include <stdio.h>

int main()
{
    int limit = 0;
    printf("Enter limit of term : ");
    scanf("%d", &limit);
    int numbers[limit];
    for (int x = 1; x <= limit; x++)
    {
        printf("Enter number when n is %d : ", x);
        scanf("%d", &numbers[x]);
        printf("\n");
    }

    for (int x = 1; x <= limit; x++)
    {
        int result = numbers[x] * numbers[x] * numbers[x];
        printf("Number is : %d and cube of the %d is : %d\n", numbers[x], numbers[x], result);
    }
    return 0;
}
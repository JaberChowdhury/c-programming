#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++)
    {
        printf("1 x %d = %d\n", i, number * i);
    }
    return 0;
}
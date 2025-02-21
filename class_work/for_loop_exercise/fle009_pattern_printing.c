#include <stdio.h>

int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        for (int i = limit; i > i; i--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// not completed yet
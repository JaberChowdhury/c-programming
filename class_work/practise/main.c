#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int x = 0;
    for (int i = 0; i <= 3; i++)
    {
        printf("    ");
        for (int k = 0; k <= i; k++)
        {
            x++;
            printf("%d  ", x);
        }

        printf("\n");
    }
    return 0;
}
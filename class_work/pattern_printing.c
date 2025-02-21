#include <stdio.h>

int main()
{
    int limit = 20;

    for (int i = 1; i <= limit; i++)
    {
        for (int j = (limit + 1); j > i; j--)
        {
            printf("%d\t", i);
        }
        printf("\n\n");
    }
    return 0;
}

/*
resource : https://www.w3resource.com/c-programming-exercises/for-loop/index.php
problem : 9 but reverse
*/
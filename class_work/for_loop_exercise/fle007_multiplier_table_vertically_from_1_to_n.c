#include <stdio.h>
int main()
{

    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (int x = 1; x <= 10; x++)
    {
        for (int i = 1; i <= limit; i++)
        {
            printf("%d x %d = %d ,\t ", i, x, i * x);
        }
        printf("\n");
    }
    return 0;
}
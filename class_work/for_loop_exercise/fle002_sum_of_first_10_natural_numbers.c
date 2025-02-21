#include <stdio.h>

int main()
{
    int sum = 0;
    for (int a = 1; a <= 10; a++)
    {
        sum += a;
    }
    printf("Sum of first 10 natural numbers is %d\n", sum);
    return 0;
}
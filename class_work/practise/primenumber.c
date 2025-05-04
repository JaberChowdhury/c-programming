#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    int x = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            x++;
        }
    }
    if (x == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers: ");
    for (int i = 2; i <= n; i++) 
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

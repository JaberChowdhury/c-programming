#include <stdio.h>

int main()
{
    long long fibos[100];
    fibos[0] = 0;
    fibos[1] = 1;

    int limit = 10;

    for (int i = 2; i < limit; i++)
    {
        fibos[i] = fibos[i - 2] + fibos[i - 1];
        printf("Position %d: Fibonacci number is %lld\n", i, fibos[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c, d, sum_of_cd, sum_of_ab;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    sum_of_cd = c + d;
    sum_of_ab = a + b;
    if (b > c && d > a && sum_of_cd > sum_of_ab && c > 0 && d > 0 && a % 2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
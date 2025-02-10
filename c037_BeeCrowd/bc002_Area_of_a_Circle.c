#include <stdio.h>

int main()
{
    double R, n = 3.14159, A;
    scanf("%lf", &R);
    A = n * (R * R);
    printf("A=%.4lf\n", A);

    return 0;
}
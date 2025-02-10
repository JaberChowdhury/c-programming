#include <stdio.h>

int main()
{
    double n1, n2;

    printf("Please enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    double total = n1 + n2;
    double average = total / 2;

    printf("The average of %lf and %lf is: %lf", n1, n2, average);

    return 0;
}
#include <stdio.h>

int main()
{

    float liter, Consumption;
    int distance;
    scanf("%d", &distance);
    scanf("%f", &liter);
    Consumption = distance / liter;
    printf("%.3f km/l\n", Consumption);
    return 0;
}
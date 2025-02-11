#include <stdio.h>

int main()
{

    int distance, min_per_km = 2, time_to_be_taken;
    scanf("%d", &distance);
    time_to_be_taken = distance * min_per_km;
    printf("%d minutos\n", time_to_be_taken);

    return 0;
}
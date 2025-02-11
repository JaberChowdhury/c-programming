#include <stdio.h>

int main()
{
    int spent_time, average_speed;
    float fuel_needed;
    scanf("%d", &spent_time);
    scanf("%d", &average_speed);
    fuel_needed = (float)(spent_time * average_speed) / 12;
    printf("%.3f\n", fuel_needed);
    return 0;
}
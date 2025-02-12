#include <stdio.h>

int main()
{
    int input_time, hours, minutes, seconds;
    scanf("%d", &input_time);

    hours = input_time / 3600;
    minutes = (input_time - hours * 3600) / 60;
    seconds = input_time - ((hours * 3600) + (minutes * 60));

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

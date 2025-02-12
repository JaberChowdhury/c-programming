#include <stdio.h>

int main()
{
    int input_day, year, month, day;
    scanf("%d", &input_day);

    year = input_day / 365;
    month = (input_day - year * 365) / 30;
    day = input_day - ((year * 365) + (month * 30));

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
    return 0;
}

#include <stdio.h>

int main()
{
    char name;
    double seller_salary, total_value_sold, TOTAL;
    scanf("%s", &name);
    scanf("%lf", &seller_salary);
    scanf("%lf", &total_value_sold);
    TOTAL = (total_value_sold * 0.15) + seller_salary;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
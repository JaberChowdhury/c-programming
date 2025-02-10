#include <stdio.h>

int main()
{
    int number, worked_hours;
    float amount;
    scanf("%d", &number);
    scanf("%d", &worked_hours);
    scanf("%f", &amount);

    float Salary = worked_hours * amount;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n", Salary);
    return 0;
}
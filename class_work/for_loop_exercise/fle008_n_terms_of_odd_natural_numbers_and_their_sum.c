#include <stdio.h>

int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    int sum = 0;
    int odd_numbers[limit];

    int index = 0;
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            odd_numbers[index++] = i;
        }
    }
    for (int i = 0; i < index; i++)
    {
        sum += odd_numbers[i];
    }
    printf("The sum of first %d odd natural numbers is %d\n", limit, sum);

    return 0;
}
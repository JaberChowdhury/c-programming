#include <stdio.h>

int main()
{
    float temp_c, temp_f;
    int choice;
    printf("Please enter your choice; \n 1. Celsius \n 2. Farenheight\n Enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temp in Celsius : ");
        scanf("%f", &temp_c);
        temp_f = ((temp_c * 9) / 5) + 32;
        printf("The temp in farenheight is : %f", temp_f);
        // (0°C × 9 / 5) + 32 = 32°F
    }
    else if (choice == 2)
    {
        printf("Enter temp in Farenheight : ");
        scanf("%f", &temp_f);
        temp_c = (temp_f - 32) * 5 / 9;
        printf("The temp in farenheight is : %f", temp_f);
        // (32°F − 32) × 5 / 9 = 0°C
    }
    else
    {
        printf("Wrong input");
    }

    return 0;
}
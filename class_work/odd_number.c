#include <stdio.h>

int main()
{
    int input;
    printf("PLease enter your input : ");
    scanf("%d", &input);

    // switch (input)
    // {
    // case 0:
    //     printf("The input is %d\n", input);
    //     printf("The number is even\n");
    //     break;
    // default:
    //     printf("The input is %d\n", input);
    // }

    switch (input % 2)
    {
    case 0:
        printf("The number is even");
        break;

    default:
        printf("The number is not even");
    }
    return 0;
}
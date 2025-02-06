#include <stdio.h>

int main()
{
    int n;

    // Ask the user for the size of the array
    printf("How many numbers do you want to enter (e.g., 1, 2, 10): ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Exit the program with an error code
    }

    // Declare the array after initializing 'n'
    int numbers[n];

    // Take user input 'n' times and store the data in the 'numbers' array
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    float avarage, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    avarage = (float)sum / (float)n;
    // Display the array elements
    printf("The numbers you entered are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", numbers[i]);
    }
    printf("The avarage number is %f: ", avarage);

    return 0;
}
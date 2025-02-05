#include <stdio.h>

void init(); // Function prototype

// Function to calculate BMI
void calculate_bmi()
{
    float weight, height, bmi;

    printf("Please enter your weight in kg: ");
    if (scanf("%f", &weight) != 1 || weight <= 0)
    {
        printf("Invalid input. Weight must be a positive number.\n");
        return;
    }

    printf("Please enter your height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0)
    {
        printf("Invalid input. Height must be a positive number.\n");
        return;
    }

    bmi = weight / (height * height);
    printf("Your BMI is %.2f\n", bmi);
}

// Function to convert Fahrenheit to Kelvin
float fahrenheit_to_kelvin(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

// Function to convert Kelvin to Fahrenheit
float kelvin_to_fahrenheit(float kelvin)
{
    return (kelvin - 273.15) * 9 / 5 + 32;
}

// Function to convert Celsius to Kelvin
float celsius_to_kelvin(float celsius)
{
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
float kelvin_to_celsius(float kelvin)
{
    return kelvin - 273.15;
}

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
void convert_temperature()
{
    int choice;
    float temperature;

    printf("Temperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Fahrenheit to Kelvin\n");
    printf("4. Kelvin to Fahrenheit\n");
    printf("5. Celsius to Kelvin\n");
    printf("6. Kelvin to Celsius\n");
    printf("7. Restart\n");
    printf("Type your choice (1-7): ");

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 7)
    {
        printf("Invalid choice.\n");
        return;
    }

    if (choice == 7)
    {
        init(); // Restart the program
        return;
    }

    printf("Enter the temperature: ");
    if (scanf("%f", &temperature) != 1)
    {
        printf("Invalid input.\n");
        return;
    }

    switch (choice)
    {
    case 1:
        printf("Temperature in Fahrenheit: %.2f\n", celsius_to_fahrenheit(temperature));
        break;
    case 2:
        printf("Temperature in Celsius: %.2f\n", fahrenheit_to_celsius(temperature));
        break;
    case 3:
        printf("Temperature in Kelvin: %.2f\n", fahrenheit_to_kelvin(temperature));
        break;
    case 4:
        printf("Temperature in Fahrenheit: %.2f\n", kelvin_to_fahrenheit(temperature));
        break;
    case 5:
        printf("Temperature in Kelvin: %.2f\n", celsius_to_kelvin(temperature));
        break;
    case 6:
        printf("Temperature in Celsius: %.2f\n", kelvin_to_celsius(temperature));
        break;
    }
}
void convert_height_unit()
{
    float height;
    int choice;

    printf("Height Conversion:\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("3. Restart\n");
    printf("Type your choice (1-3): ");

    if (scanf("%d", &choice) != 1 || (choice < 1 || choice > 3))
    {
        printf("Invalid choice.\n");
        return;
    }

    if (choice == 3)
    {
        init(); // Restart the program
        return;
    }

    printf("Enter height: ");
    if (scanf("%f", &height) != 1 || height <= 0)
    {
        printf("Invalid input. Height must be a positive number.\n");
        return;
    }

    if (choice == 1)
    {
        printf("Height in feet: %.2f\n", height * 3.28084);
    }
    else if (choice == 2)
    {
        printf("Height in meters: %.2f\n", height / 3.28084);
    }
}

// Function to execute programs based on user input
void exec_program(int choice)
{
    switch (choice)
    {
    case 1:
        calculate_bmi();
        break;
    case 2:
        convert_temperature();
        break;
    case 3:
        convert_height_unit();
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }
}
void init()
{
    int choice = 0;

    while (1) // Keep asking until user exits
    {
        printf("\nPlease select your choice:\n");
        printf("1. BMI Calculator\n");
        printf("2. Temperature Converter\n");
        printf("3. Height Unit Converter\n");
        printf("4. Exit\n");
        printf("Type your choice (1-4): ");

        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 4)
        {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            continue;
        }

        if (choice == 4)
        {
            printf("Exiting the program...\n");
            return; // Exit the loop
        }

        exec_program(choice);
    }
}

// Main function
int main()
{
    init();

    return 0;
}
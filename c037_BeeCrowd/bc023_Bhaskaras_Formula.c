#include <math.h>
#include <stdio.h>

int main()
{
    // double a = 10.0, b = 20.1, c = 5.1;
    // double a = 0.0, b = 20.0, c = 5.0;
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    float discriminant = ((b * b) - 4 * a * c);

    if (a == 0 || discriminant < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        double r1 = (-b + sqrt(discriminant)) / (2 * a);
        double r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    return 0;
}

// BAshkara's formula = ax^2 (+-) bx + c = 0
// not solved yet
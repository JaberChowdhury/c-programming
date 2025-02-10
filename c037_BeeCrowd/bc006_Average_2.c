#include <stdio.h>
int main()
{

    float a, b, c, MEDIA;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    MEDIA = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
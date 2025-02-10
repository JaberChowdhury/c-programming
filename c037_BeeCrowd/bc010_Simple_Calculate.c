#include <stdio.h>
struct PRODUCT
{
    int code;
    int total_unit;
    float price_per_unit;
};
int main()
{
    float total;
    struct PRODUCT product_1;
    struct PRODUCT product_2;
    scanf("%d %d %f", &product_1.code, &product_1.total_unit, &product_1.price_per_unit);
    scanf("%d %d %f", &product_2.code, &product_2.total_unit, &product_2.price_per_unit);
    total = (product_1.price_per_unit * product_1.total_unit) + (product_2.price_per_unit * product_2.total_unit);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
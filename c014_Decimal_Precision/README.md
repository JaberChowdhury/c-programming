#### Decimal Precision

When we print a float or double type number we can see that there more point after decimal printed on terminal .More than we assaigned !!
So we can specify how much we want to see after decimal by adding (`.`) with specific number before `%f` .

``` c
float x = 3.5;

// regular way
printf("%f\n", x); // this will show 6 digit after the decimal point 

// only show 1 digit
printf("%.1f\n", x);

// only show 2 digit
printf("%.2f\n", x);

```

#### Number data type

* Use `int` when you need to store a whole number without decimals, like 35 or 1000, and `float` or `double` when you need a floating point number (with decimals), like 9.99 or 3.14515.


### `float` vs `double`

| Type | after decimal | specifier | example |
|---------|----------------------|----------------|---------------|
| `float` | 6 or 7 digit | `%f` | 3.1416, 11.97485|
| `double` | 15 digit | `%lf` | 18.878997447898653|




#### Scientific Numbers

 * A floating point number can also be a scientific number with an "e" to indicate the power of 10:

#### Example

``` c
float f1 = 35e3;
double d1 = 12E4;

printf("%f\n", f1);
printf("%lf", d1);
```
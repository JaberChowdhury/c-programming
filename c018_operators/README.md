### C divides the operators into the following groups:

- Arithmetic operators
- Assignment operators
- Comparison operators
- Logical operators
- Bitwise operators

## Arithmetic operator

| Operator | Name           | Description                            | Example |              code               |
| :------: | :------------- | :------------------------------------- | :-----: | :-----------------------------: |
|    +     | Addition       | Adds together two values               |  x + y  |     `printf("%d", 19 + 89)`     |
|    -     | Subtraction    | Subtracts one value from another       |  x - y  |     `printf("%d", 19 - 8)`      |
|    \*    | Multiplication | Multiplies two values                  | x \* y  |     `printf("%d", 19 * 89)`     |
|    /     | Division       | Divides one value by another           |  x / y  |    `printf("%d", 100 / 10)`     |
|    %     | Modulus        | Returns the division remainder         |  x % y  |    `printf("%d", 2827 % 28)`    |
|    ++    | Increment      | Increases the value of a variable by 1 |   ++x   | `int x = 10 ;printf("%d", ++x)` |
|    --    | Decrement      | Decreases the value of a variable by 1 |   --x   | `int y = 5 ; printf("%d", --y)` |

## Assignment Operators

| Operator | Example | Same As    |
| :------: | ------- | ---------- |
|    =     | x = 5   | x = 5      |
|    +=    | x += 3  | x = x + 3  |
|    -=    | x -= 3  | x = x - 3  |
|   \*=    | x \*= 3 | x = x \* 3 |
|    /=    | x /= 3  | x = x / 3  |
|    %=    | x %= 3  | x = x % 3  |
|    &=    | x &= 3  | x = x & 3  |
|   \|=    | x \|= 3 | x = x \| 3 |
|    ^=    | x ^= 3  | x = x ^ 3  |
|   >>=    | x >>= 3 | x = x >> 3 |
|   <<=    | x <<= 3 | x = x << 3 |


### Comparison Operators
| Operator | Name                     | Example |                                                                 Description |
| :------: | ------------------------ | ------- | --------------------------------------------------------------------------: |
|    ==    | Equal to                 | x == y  |                                           Returns 1 if the values are equal |
|    !=    | Not equal                | x != y  |                                       Returns 1 if the values are not equal |
|    >     | Greater than             | x > y   |               Returns 1 if the first value is greater than the second value |
|    <     | Less than                | x < y   |                  Returns 1 if the first value is less than the second value |
|    >=    | Greater than or equal to | x >= y  | Returns 1 if the first value is greater than, or equal to, the second value |
|    <=    | Less than or equal to    | x <= y  |    Returns 1 if the first value is less than, or equal to, the second value |


## Logical Operator
| Operator | Name | Example            | Description                                      |
| :------: | ---- | ------------------ | ------------------------------------------------ |
|    &&    | AND  | x < 5 && x < 10    | Returns 1 if both statements are true            |
|   \|\|   | OR   | x < 5 \|\| x < 4   | Returns 1 if one of the statements is true       |
|    !     | NOT  | !(x < 5 && x < 10) | Reverse the result, returns 0 if the result is 1 |

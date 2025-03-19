# Array

```c
#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d", myNumbers[0]);
  return 0;
}
```

## size / length of array

```c
#include <stdio.h>

int main(){
    int present_id[] = {12,54,35,78,09};
    printf("size or length of array %d", sizeof(present_id) / sizeof(present_id[0]));
    return 0;
}
```

## loop through an array

```c
#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}
```

## sum of an array

```c
#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    int sum = 0;
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)
    {
        sum += myNumbers[i];
    }
    printf("%d",sum);
    return 0;
}
```

## get the `last item` of an array

```c
#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d", myNumbers[size - 1]);
    return 0;
}
```

## add item in an array

```c
#include <stdio.h>

int main()
{
    int myNumbers[9];
    for (int i = 0; i < 9; i++)
    {
        // adding item in array
        myNumbers[i] = i + 10;
    }

    // Print the array
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}
```

# Loop

## 2 types of loop in c

```md
loop in c
├── Entry Controlled loops
│ ├── For Loop
│ └── While Loop
│
├── Exit Controlled loops
│ └── do-while Loop
```

| Loop Type     | Description                                                                                                |
| ------------- | ---------------------------------------------------------------------------------------------------------- |
| for loop      | first Initializes, then condition check, then executes the body and at last, the update is done.           |
| while loop    | first Initializes, then condition checks, and then executes the body, and updating can be inside the body. |
| do-while loop | do-while first executes the body and then the condition check is done.                                     |

### for loop

```c
#include <stdio.h>

int main()
{
  int i = 0;

  for (i = 1; i <= 10; i++)
  {
    printf( "Hello World\n");
  }
  return 0;
}

```

### while loop

```c
#include <stdio.h>

int main()
{
  int i = 2;
  while(i < 10)
  {
    printf( "Hello World\n");
    i++;
  }
  return 0;
}

```

### do-while Loop

```c
#include <stdio.h>

int main()
{
    int i = 2;
    do
    {
        printf("Hello World\n");
        i++;
    } while (i < 1);
    return 0;
}
```

## nested for loop

```c
#include <stdio.h>

int main()
{
    int data[4][3][6] = {
        {
            {13, 24, 31, 42, 53, 63},
            {74, 48, 39, 10, 11, 12},
            {13, 14, 15, 16, 17, 18},
        },
        {
            {19, 20, 21, 22, 23, 24},
            {25, 26, 27, 28, 29, 30},
            {31, 32, 33, 34, 35, 36},
        },
        {
            {37, 38, 39, 40, 41, 42},
            {43, 44, 45, 46, 47, 48},
            {49, 50, 51, 52, 53, 54},
        },
        {
            {55, 56, 57, 58, 59, 60},
            {61, 62, 63, 64, 65, 66},
            {67, 68, 69, 70, 71, 72},
        }};
    // nested for loop
    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            for (int c = 0; c < 6; c++)
            {
                printf("data[%d][%d][%d] = %d\n", a, b, c, data[a][b][c]);
            }
        }
    }
    return 0;
}

```
 
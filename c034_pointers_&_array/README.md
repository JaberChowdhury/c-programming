Since myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it

``` c 
int myNumbers[4] = {25, 50, 75, 100};

// Get the value of the first element in myNumbers
printf("%d", *myNumbers);
```
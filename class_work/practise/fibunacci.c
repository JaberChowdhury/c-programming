// #include <stdio.h>

// int main()
// {
//     int a = 0, b = 1, next, n;
//     scanf("%d", &n);

//     while (a <= n)
//     {
//         printf("%d\n", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

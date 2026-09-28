//sum of n number
#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d", sum(n));

    return 0;
}


//factorial of n number
#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}
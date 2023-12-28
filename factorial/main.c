#include <stdio.h>

typedef unsigned long long ull;

ull factorial_iterative(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    ull result = factorial_iterative(number);
    printf("%d! = %llu", number, result);
    
    return 0;
}

ull factorial_iterative(int number)
{
    ull result = 1;

    for (int i = 1; i <= number; ++i)
        result *= i;

    return result;
}
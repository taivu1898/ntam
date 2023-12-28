#include <stdio.h>

typedef unsigned long long ull;

ull binary_exponentiation(int, int);

int main()
{
    int base, exponment;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponment: ");
    scanf("%d", &exponment);

    ull result = binary_exponentiation(base, exponment);
    printf("%d^%d = %llu.", base, exponment, result);

    return 0;
}

ull binary_exponentiation(int base, int exponment)
{
    ull result = 1;

    while (exponment > 0)
    {
        if (exponment % 2 == 1)
            result *= base;

        base *= base;
        exponment /= 2;
    }
    
    return result;
}
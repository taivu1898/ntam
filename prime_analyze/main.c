#include <stdio.h>

typedef unsigned long long ull;

void prime_factorization(ull);

int main()
{
    ull number;
    
    printf("Enter a positive integer: ");
    scanf("%llu", &number);

    printf("Prime factors of llu are: ", number);
    prime_factorization(number);

    return 0;
}

void prime_factorization(ull number)
{
    for (ull i = 2; i * i <= number; ++i)
    {
        int exponment = 0;
        while (number % i == 0)
        {
            ++exponment;
            number /= i;
        }
        printf("%llu^%llu", i, exponment);

        if (number != 1)
            printf(" * ");
    }

    if (number > 1)
        printf("%llu^1", number);
}
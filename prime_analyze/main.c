#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

void prime_factorization(ull);

int main()
{
    ull number;
    
    printf("Enter a positive integer: ");
    scanf("%llu", &number);

    printf("Prime factors of %llu are: ", number);
    prime_factorization(number);

    return 0;
}

void prime_factorization(ull number)
{
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            int exponment = 0;
            while (number % i == 0)
            {
                ++exponment;
                number /= i;
            }
            printf("%d^%d", i, exponment);

            if (number != 1)
                printf(" * ");
        }
    }

    if (number > 1)
        printf("%llu^1", number);
}
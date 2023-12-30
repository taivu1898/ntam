#include <stdio.h>
#include <math.h>
#include <limits.h>

/*  Find the largest prime factor   */

typedef unsigned long long ull;

ull largest_prime_factor(ull);

int main()
{
    ull number;

    printf("Enter your number: ");
    scanf("%llu", &number);

    ull result = largest_prime_factor(number);
    printf("Largest prime factor of %llu is: %llu ", number, result);

    return 0;
}

ull largest_prime_factor(ull number)
{
    long long max_prime = LLONG_MIN;

    while (number % 2 == 0)
    {
        max_prime = 2;
        number /= 2;
    }
    
    for (ull i = 3; i <= sqrt(number); i += 2)
    {
        while (number % i == 0)
        {
            max_prime = i;
            number /= i;
        }
    }

    if (number > 2)
        max_prime = number;

    return max_prime;
}
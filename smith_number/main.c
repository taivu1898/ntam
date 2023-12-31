#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

ull sum_of_digits(ull);
int is_smith(ull);
int is_prime(ull);

int main()
{
    ull number;

    printf("Enter your number: ");
    scanf("%llu", &number);
    

    int result = is_smith(number);
    printf(result ? "%d is smith number." : "%d isn't smith number", number);    
    return 0;
}

ull sum_of_digits(ull number)
{
    int sum = 0;

    while (number)
    {
        sum += number % 10;
        number /= 10;
    }   
    return sum;
}

int is_prime(ull n)
{
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int is_smith(ull number)
{
    int original_num = number;
    int sum_digits_original = sum_of_digits(number);
    int sum_digits_prime_factors = 0;

    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0 && is_prime(i))    
            while (number % i == 0)
            {
                sum_digits_prime_factors += sum_of_digits(i);
                number /= i;
            }
    }

    if (original_num == number)
        return 0;

    if (number > 1)
        sum_digits_prime_factors += sum_of_digits(number);

    return sum_digits_original == sum_digits_prime_factors;
}
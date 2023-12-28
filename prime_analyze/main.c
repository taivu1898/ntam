#include <stdio.h>

void prime_factorization(int);

int main()
{
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    prime_factorization(number);

    return 0;
}

void prime_factorization(int number)
{
    for (int i = 2; i * i <= number; ++i)
    {
        while (number % i == 0)
        {
            printf("%d ", i);
            number /= i;
        }
    }

    if (number > 1)
        printf("%d", number);
}
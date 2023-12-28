#include <stdio.h>

int is_prime(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = is_prime(number);
    printf("%d %s", number, result ? "is prime." : "isn't prime.");

    return 0;
}

int is_prime(int number)
{
    for (int i = 2; i * i <= number; ++i)
        if (number % i == 0)
            return 0;
    
    return number > 1;
}
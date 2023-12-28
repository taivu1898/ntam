#include <stdio.h>

typedef unsigned long long ull;

ull sum_of_divison(ull);

int main()
{
    ull number;

    printf("Enter a positive integer: ");
    scanf("%llu", &number);

    ull result = sum_of_divison(number);
    printf("The sum of divison of %llu is: %llu.", number, result);

    return 0;
}

ull sum_of_divison(ull number)
{
    ull sum = 0;

    for (int i = 1; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            sum += i;
            if (i != number / i)
                sum += number / i;
        }
    }

    return sum;
}
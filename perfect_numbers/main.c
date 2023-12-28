#include <stdio.h>

int is_perfect_number(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = is_perfect_number(number);
    printf("%d %s", number, result ? "is perfect number." : "isn't perfect number.");

    return 0;
}

int is_perfect_number(int number)
{
    int sum = 1;

    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            sum += i;
            if (i != number / i)
                sum += number / i;
        }
    }

    return sum == number;
}
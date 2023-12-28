#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

ull is_perfect_square(ull);
int is_fibonacci(ull);
void print_fibonacci(ull);
ull calculate_fibonacci(ull);

int main()
{
    ull number;
    scanf("%llu", &number);

    printf("%llu %s\n", number, is_fibonacci(number) ? "is a Fibonacci number."
                                                 : "isn't a Fibonacci number.");

    print_fibonacci(number);
    printf("Fibonacci %llu: %llu", number, calculate_fibonacci(number));


    return 0;
}

ull is_perfect_square(ull number)
{
    ull square_root = sqrt(number);
    return (square_root * square_root == number);
}

int is_fibonacci(ull number)
{
    return is_perfect_square(5 * pow(number, 2) + 4)
        || is_perfect_square(5 * pow(number, 2) - 4);
}

void print_fibonacci(ull number)
{   
    if (number == 1)
        printf("Fibonacci seires for first 1 terms : 0");
    
    else if (number == 2)
        printf("Fibonacci seires for first 2 terms : 0 1");
    
    else
    {
        ull first = 0, second = 1;

        printf("Fibonacci series for first %d terms: ", number);

        printf("0 1 ");
        for (ull i = 2; i < number; ++i)
        {
            ull next = first + second;
            printf("%llu ", next);

            first = second;
            second = next;
        }

        printf("\n");
    }
}

ull calculate_fibonacci(ull number)
{
    if (number == 0 || number == 1)
        return number;
    
    else
    {
        ull first = 0, second = 1, next = 0;

        for (ull i = 1; i <= number; ++i)
        {
            next = first + second;
            first = second;
            second = next;
        }

        return next;
    }
}
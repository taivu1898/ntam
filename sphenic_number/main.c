#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

int is_prime(ull);
int is_sphenic(ull);

int main()
{
    ull number;
    scanf("%llu", &number);

    int result = is_sphenic(number);
    printf("%llu %s", number, result ? "is sphenic number." : "isn't sphenic number.");

    return 0;
}

int is_prime(ull number)
{
    for (int i = 2; i <= sqrt(number); ++i)
        if (number % i == 0)
            return 0;
    return number > 1;
}

int is_sphenic(ull number)
{
    int count = 0;
    for (ull i = 2; i <= number / 3; ++i)
    {
        if (is_prime(i))
        {
            int exponment = 0;

            while (number % i == 0)
            {
                ++exponment;
                number /= i;

                if (exponment > 2)
                    return 0;
            }
            if (exponment > 0)
                ++count;
        }
    }

    if (number > 1)
        ++count;

    return (count == 3);
}
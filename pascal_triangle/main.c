#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

ull combination(int, int);
void print_pascal_triangle(int);

int main()
{
    int height;

    printf("Enter the height of Pascal's triangle: ");
    scanf("%d", &height);

    print_pascal_triangle(height);

    return 0;
}

ull combination(int n, int k)
{
    int result = 1;
    k = fmin(k, n - k);

    for (int i = 1; i <= k; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}

void print_pascal_triangle(int height)
{
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < height - i - 1; ++j)
            printf("   ");
        
        for (int j = 0; j <= i; ++j)
            printf("%6d", combination(i, j));

        printf("\n");
    }
}
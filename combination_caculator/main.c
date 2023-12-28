#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

ull combination(int, int);

int main()
{
    int n, k;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    ull result = combination(n, k);
    printf("C(%d, %d) = %llu.", n, k, result);

    return 0;
}

ull combination(int n, int k)
{
    ull result = 1;
    k = fmin(k, n - k);
    
    for (int i = 1; i <= k; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}
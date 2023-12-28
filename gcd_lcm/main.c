#include <stdio.h>

int caculate_gcd(int, int);
int caculate_lcm(int, int);

int main()
{
    int number1, number2;

    printf("Enter the first positive integer: ");
    scanf("%d", &number1);

    printf("Enter the second positive integer: ");
    scanf("%d", &number2);

    printf("GCD of %d and %d is: %d.\n", number1, number2, caculate_gcd(number1, number2));
    printf("LCM of %d and %d is: %d.\n", number1, number2, caculate_lcm(number1, number2));
    
    return 0;
}

int caculate_gcd(int number1, int number2)
{
    while (number2 != 0)
    {
        int temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }

    return number1;
}

int caculate_lcm(int number1, int number2)
{
    return number1 * number2 / caculate_gcd(number1, number2);
}
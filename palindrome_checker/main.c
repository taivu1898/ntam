#include <stdio.h>

int is_palindrome(int);

int main()
{
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    int result = is_palindrome(number);

    printf("%d %s", number, result ? "is a palindrome number." : "isn't a palindrome number.");
    
    return 0;
}

int is_palindrome(int number)
{
    int temp = number, result = 0;

    while (number)
    {
        result = result * 10 + number % 10;
        number /= 10;
    }
    
    return temp == result;
}
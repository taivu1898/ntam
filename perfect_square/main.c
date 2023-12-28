#include <stdio.h>
#include <math.h>

int is_perfect_square(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = is_perfect_square(number);
    printf("%d %s", number, result ? "is perfect square." : "isn't perfect square.");
    
    return 0;
}

int is_perfect_square(int number)
{
    int square_root = sqrt(number);
    return (square_root * square_root == number);
}
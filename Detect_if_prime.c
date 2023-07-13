#include <stdio.h>

int main()
{

    int number, range;
    printf("Enter the number: ");
    scanf("%d", &number);

    range = number - 1;

    // Loop to check divisibility of the number by all numbers less than it
    while (range > 1)
    {
        // If the number is divisible by any number, it is not prime
        if (number % range == 0)
        {
            printf("%d is not a prime number", number);
            break; // Exit the loop since the number is not prime
        }

        range--;
    }

    // If the loop completes without finding any divisor, the number is prime
    if (range == 1)
    {
        printf("%d is a prime number", number);
    }

    return 0;
}

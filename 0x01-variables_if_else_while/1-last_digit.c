#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, last_digit;

    srand(time(NULL)); /* Seed the random number generator */
    n = rand() - RAND_MAX / 2; /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */

    last_digit = abs(n % 10); /* Get the absolute value of the last digit of n */

    printf("Last digit of %d is %d and is ", n, last_digit);

    if (last_digit > 5)
        printf("greater than 5\n");
    else if (last_digit == 0)
        printf("0\n");
    else
        printf("less than 6 and not 0\n");

    return (0);
}

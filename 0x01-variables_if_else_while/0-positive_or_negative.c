#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */

int main(void) {
    int n;
    srand(time(NULL));
    n = rand() - RAND_MAX/2;

    printf("%d\n", n);
    if (n > 0) {
        printf("The number %d is positive\n", n);
    } else if (n == 0) {
        printf("The number %d is zero\n", n);
    } else {
        printf("The number %d is negative\n", n);
    }

    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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

#include <stdio.h>

int main(void) {
    long num = 612852475143;
    long largestFactor = 2;

    while (num > 1) {
        if (num % largestFactor == 0) {
            num /= largestFactor;
        } else {
            largestFactor++;
        }
    }

    printf("%ld\n", largestFactor);
    return 0;
}


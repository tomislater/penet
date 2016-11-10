#include <stdio.h>

const unsigned int two_million = 2000000;

int is_prime(unsigned long int x) {
    unsigned long int y;

    for (y=2; y*y <= x; y++) {
        if (x % y == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    unsigned long int n=2, sum=0;

    while (n != two_million) {
        if (is_prime(n)) {
            sum += n;
        }

        n++;
    }

    printf("%lu\n", sum);

	return 0;
}

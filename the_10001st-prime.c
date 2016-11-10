#include <stdio.h>

int is_prime(unsigned int x) {
    unsigned int y;

    for (y=2; y*y <= x; y++) {
        if (x % y == 0) {
            return 0;
        }
    }

    return 1;
}


int main(void) {
    unsigned int count=0, i=1;

    while (count != 10001) {
        if (is_prime(++i)) {
            count++;
        }
    }

    printf("%d\n", count);
    printf("%d\n", i);

    return 0;
}

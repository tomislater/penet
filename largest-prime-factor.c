#include <stdio.h>
#include <math.h>

const unsigned long int n = 600851475143;


int main(void) {
    unsigned long int i, j, lpf=0, elpf=0;

    for (i=1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            printf("i: %lu\nn/i %lu\n\n", i, n/i);

            elpf = lpf;
            lpf = i;

            for (j=i-1; j > 1; --j) {
                if (i % j == 0) {
                    lpf = elpf;
                    break;
                }
            }
        }
    }

    printf("Largest Prime Factor: %lu\n", lpf);

    return 0;
}

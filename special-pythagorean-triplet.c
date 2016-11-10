#include <stdio.h>

int main(void) {
    unsigned int m, n, a, b, c;

    for(n=1; n <= 32; n++) {
        for(m = n+1; m <= 32; m++) {
            a = (m*m) - (n*n);
            b = 2 * m * n;
            c = (m*m) + (n*n);

            if ((a+b+c) == 1000) {
                printf("%d\n", a*b*c);
            }
        }
    }

    return 0;
}

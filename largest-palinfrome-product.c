#include <stdio.h>

int main(void) {
    unsigned int a=100, b, result, lpp=0, remainder, reversed, r;

    while (a++ < 1000) {
        b=100;

        while (b++ < 1000) {
            result = a * b;
            r = result;

            reversed = 0;

            while (r != 0) {
                remainder = r % 10;
                reversed = reversed * 10 + remainder;
                r = r / 10;
            }

            if ((reversed == result) && (reversed > lpp)) {
                lpp = reversed;
            }
        }
    }

    printf("%d\n", lpp);

    return 0;
}

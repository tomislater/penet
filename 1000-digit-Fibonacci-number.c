#include <gmp.h>
#include <stdio.h>


int main(void) {

    int i = 0;
    char c[1001] = {0};

    mpz_t n;
    mpz_t m;
    mpz_t tmp;

    mpz_init(n);
    mpz_init(m);
    mpz_init(tmp);

    mpz_set_ui(n, 1);
    mpz_set_ui(m, 1);

    while (i < 10000) {
        mpz_set(tmp, n);
        mpz_add(n, n, m);
        mpz_set(m, tmp);

        i++;

        mpz_get_str(c, 10, n);

        if (c[999] != 0) {
            printf("%d\n", i + 2);
            break;
        }
    }
    mpz_clear(n);
    mpz_clear(m);
    mpz_clear(tmp);

    return 0;
}

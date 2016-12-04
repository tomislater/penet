#include <stdio.h>

int sum_of_proper_divisors(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main(void) {
    double sum = 0;

    int abundants[28123] = {0};
    int pabundants[28123] = {0};

    for (int i = 1; i <= 28123; i++)
        if (sum_of_proper_divisors(i) > i)
            // abundant number?
            abundants[i] = i;

    for (int i = 1; i <= 28123; i++) {
        int ii = abundants[i];

        if (ii == 0)
            continue;

        for (int j = 1; j <= 28123; j++) {
            int jj = abundants[j];

            if (jj == 0)
                continue;

            if ((ii+jj) > 28123) {
                break;
            }

            pabundants[ii+jj] = 1;
        }
    }

    for (int i = 1; i <= 28123; i++) {
        int ii = pabundants[i];

        if (ii == 0)
            sum+= i;
    }

    printf("%0.f\n", sum);

    return 0;
}

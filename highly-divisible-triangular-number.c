#include <stdio.h>
#include <math.h>

int count_divisors(unsigned int number) {
    unsigned int nod = 2;

    for (int i = 2; i < sqrt(number); i++) {
        if (number % i == 0) {
            nod = nod + 2;
        }
    }

    if (number % (int)sqrt(number) == 0) {
        nod++;
    }

    return nod;
}

int main(void) {

    unsigned int i=1, number_of_divisors=0, sum_seq=0;

    while (number_of_divisors <= 500) {

        sum_seq = (i * (i + 1)) / 2;

        number_of_divisors = count_divisors(sum_seq);

        i++;
    }

    printf("%d %d\n", sum_seq, number_of_divisors);

    return 0;
}

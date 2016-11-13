#include <stdio.h>

unsigned int collatz_seq(unsigned int number) {
    return (number % 2 == 0) ? number / 2 : (3 * number) + 1;
}


int main(void) {

    unsigned int result=0, sum = 0;

    for (int i = 1; i < 1000000; ++i) {
        unsigned int tmp_sum = 0, tmp_result = i;

        while (tmp_result != 1) {
            tmp_result = collatz_seq(tmp_result);
            tmp_sum++;
        }

        if (tmp_sum > sum) {
            result = i;
            sum = tmp_sum;
        }

    }

    printf("%d\n", result);

    return 0;
}

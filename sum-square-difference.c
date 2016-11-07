#include <stdio.h>


int main(void) {
    unsigned long int sum_of_the_squares=0, square_of_the_sum=0, i=0;

    for (; i <= 100; i++) {
        sum_of_the_squares += i * i;
        square_of_the_sum += i;
    }

    square_of_the_sum *= square_of_the_sum;

    printf("%ld\n", sum_of_the_squares);
    printf("%ld\n", square_of_the_sum);
    printf("%ld\n", square_of_the_sum - sum_of_the_squares);

    return 0;
}

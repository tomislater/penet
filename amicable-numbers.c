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
    int sum_of_amicable_pair = 0;

    for (int i = 1; i < 10000; i++) {
        int sum = sum_of_proper_divisors(i);

        if (sum != i && sum_of_proper_divisors(sum) == i)
            sum_of_amicable_pair += sum;
    }

    printf("%d\n", sum_of_amicable_pair);

    return 0;
}

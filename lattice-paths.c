#include <stdio.h>

double factorial(int i) {
    if (i == 0)
        return 1;

    return factorial(i - 1) * i;
}

int main(void) {

    int size = 20;
    int double_size = size * 2;

    double n, k, result;

    n = factorial(double_size);
    k = factorial(size) * factorial(double_size - size);

    result  = n / k;

    printf("%.0f\n", result);

    return 0;
}

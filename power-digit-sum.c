#include <stdio.h>

int main(void) {

    char str[1000] = {};

    int number = 2, pow = 1000, sum = 0;
    double result = 1;

    while (pow--)
        result *= number;

    sprintf(str, "%.0f", result);

    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
        if (str[i] > 0) {
            sum += (str[i] - 48);
        }
    }

    printf("%d\n", sum);

    return 0;
}

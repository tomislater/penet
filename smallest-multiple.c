#include <stdio.h>
#define COUNT 19


int main(void) {
    unsigned int number=20, i, count, smallest_multiple=0;

    while (number++) {
        count = 0;

        for (i=2; i <= 20; i++) {
            if ((number % i) == 0) {
                count++;
            }
        }

        if (count == COUNT) {
            smallest_multiple = number;
            break;
        }
    }

    printf("%d\n", smallest_multiple);

	return 0;
}

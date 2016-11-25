#include <stdio.h>


int main(void) {

    int day = 1;
    int sundays = 0;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int y = 1900; y < 2001; y++) {
        for (int m = 0; m < 12; m++) {

            int dm = months[m];

            if (dm == 28 && (((y % 100 == 0) && (y % 400 == 0)) || ((y % 100 != 0) && (y % 4 == 0)))) {
                dm = 29;
            }

            for (int d = 1; d <= dm; d++) {
                if ((day % 7 == 0) && y > 1900 && d == 1) {
                    sundays++;
                }
                day++;

            }
        }
    }

    printf("%d\n", sundays);

    return 0;
}


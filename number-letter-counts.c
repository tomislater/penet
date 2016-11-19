#include <stdio.h>

int give_me_sum(int i) {
    int sum = 0;
    
    if (i == 1000) {
        return sizeof("onethousand") - 1;
    }
    
    if (i <= 20) {
        switch (i) {
            case 1:
                sum = sizeof("one");
                break;
            case 2:
                sum = sizeof("two");
                break;
            case 3:
                sum = sizeof("three");
                break;
            case 4:
                sum = sizeof("four");
                break;
            case 5:
                sum = sizeof("five");
                break;
            case 6:
                sum = sizeof("six");
                break;
            case 7:
                sum = sizeof("seven");
                break;
            case 8:
                sum = sizeof("eight");
                break;
            case 9:
                sum = sizeof("nine");
                break;
            case 10:
                sum = sizeof("ten");
                break;
            case 11:
                sum = sizeof("eleven");
                break;
            case 12:
                sum = sizeof("twelve");
                break;
            case 13:
                sum = sizeof("thirteen");
                break;
            case 14:
                sum = sizeof("fourteen");
                break;
            case 15:
                sum = sizeof("fifteen");
                break;
            case 16:
                sum = sizeof("sixteen");
                break;
            case 17:
                sum = sizeof("seventeen");
                break;
            case 18:
                sum = sizeof("eighteen");
                break;
            case 19:
                sum = sizeof("nineteen");
                break;
            case 20:
                sum = sizeof("twenty");
                break;
        }
        
        return sum - 1;
        
    } else if (i >= 100 && i < 1000) {
        if (i % 100 != 0) {
            return give_me_sum(i / 100) + sizeof("hundredand") - 1 + give_me_sum(i % 100);
        } else {
            return give_me_sum(i / 100) + sizeof("hundred") - 1;
        }
    } else {
        switch (i - (i % 10)) {
            case 20:
                sum = sizeof("twenty");
                break;
            case 30:
                sum = sizeof("thirty");
                break;
            case 40:
                sum = sizeof("forty");
                break;
            case 50:
                sum = sizeof("fifty");
                break;
            case 60:
                sum = sizeof("sixty");
                break;
            case 70:
                sum = sizeof("seventy");
                break;
            case 80:
                sum = sizeof("eighty");
                break;
            case 90:
                sum = sizeof("ninety");
                break;
        }
        
        if (i % 10 != 0) {
            return sum - 1 + give_me_sum(i % 10);
        } else {
            return sum - 1;
        }
    }
}


int main(void) {
    unsigned int sum = 0;
    
    for (int i = 1; i <= 1000; i++) {
        sum += give_me_sum(i);
    }
    
    printf("%d\n", sum);
    return 0;
}

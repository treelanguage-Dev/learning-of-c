//
// Created by treelang-dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int digit;
    int ret = 0;
    while (x > 0) {
        digit = x % 10;
        ret = ret * 10 + digit;
        printf("x=%d, digit=%d, ret=%d\n", x, digit, ret);
        x /= 10;
    }
    printf("%d", ret);
}

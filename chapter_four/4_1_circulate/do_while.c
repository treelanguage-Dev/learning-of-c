//
// Created by treelang-dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    //First cycle body, and then judge the conditions
    int x;
    int n = 0;
    scanf("%d", &x);
    do {
        n++;
        x /= 10;
    } while (x > 0);
    printf("%d", n);
    //Judge the conditions before entering the cycle
    while (x > 0) {
        n++;
        x /= 10;
    }
}

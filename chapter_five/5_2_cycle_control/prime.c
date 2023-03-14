//
// Created by treelang-dev on 3/5/2023.
//

#include <stdio.h>

int main() {
    int x;
    int cnt = 0;
    //scanf("%d",&x);
    //for (x = 1; x <= 100; x++) {
    x = 1;
    while (cnt < 50) {
        int i;
        int isPrime = 1;
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cnt++;
            printf("%d\t", x);
            if (cnt % 5 == 0) {
                printf("\n");
            }
        }
        x++;
    }
}
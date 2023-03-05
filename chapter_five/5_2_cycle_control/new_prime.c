//
// Created by treelanguage-Dev on 3/5/2023.
//

#include <stdio.h>

int main() {
    int x = 9;
    //scanf("%d",&x);
    int isPrime = 1;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        printf("Is a prime number\n");
    } else {
        printf("Not a prime\n");
    }
    /**
     * Break is to jump out of the loop
     * Continue is to skip the remaining statements in this cycle and enter the next cycle
     */
}
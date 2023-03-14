//
// Created by treelang-dev on 3/5/2023.
//

#include <stdio.h>
#include <math.h>

int main() {
    int x;
    //scanf("%d", &x);
    x = 12345;
    int t=x;
    int mask = 1;
    while (t > 9) {
        t /= 10;
        mask *= 10;
    }
    printf("x=%d, mask=%d\n",x, mask);
    do {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
        //printf("x=%d, mask=%d, d=%d\n",x,mask,d);
    } while (mask > 0);
    printf("\n");
}
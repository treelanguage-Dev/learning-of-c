//
// Created by treelanguage-Dev on 3/5/2023.
//

#include <stdio.h>

int main() {
    int x = 1;
    int one, two, five;
    //scanf("%d",&x);
    for (one = 1; one < x * 10; one++) {
        for (two = 1; two < x * 10 / 2; two++) {
            for (five = 1; five < x * 10 / 5; five++) {
                if (one + two * 2 + five * 5 == x * 10) {
                    printf("You can make %d yuan with %d corners plus %d two and %d fifty\n", x, one, two, five);
                    goto out;
                }
            }
        }
    }
    out:
    // break and continue.
    // It can only be done on the layer where it is located
}
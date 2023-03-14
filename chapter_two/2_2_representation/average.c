//
// Created by treelang-dev on 3/3/2023.
//

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("The average of %d and %d is %f\n", a, b, c);
    /**
     * Operator priority
     * Normal is from left to right, especially from right to left, such as
     * a*+b, a*-b, a=b
     */
}

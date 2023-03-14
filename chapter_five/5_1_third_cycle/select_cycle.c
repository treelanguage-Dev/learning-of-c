//
// Created by treelang-dev on 3/5/2023.
//

#include <stdio.h>

int main() {
    int fact = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    //Equal to follow
    int o = 1;
    while (o <= n) {
        fact *= o;
        o++;
    }
    /**
     * If there is a fixed number of times, use for
     * If it must be executed once, use do_ while
     * Use while for other i cases
     */
}

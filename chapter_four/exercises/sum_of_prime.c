//
// Created by treelanguage-Dev on 3/9/2023.
//

#include <stdio.h>

int main() {
    int m, n;
    int i;
    int cnt = 0;
    int sum = 0;
    scanf("%d%d", &m, &n);
    if (m == 1) {
        m = 2;
    }
    for (i = m; i <= n; i++) {
        int k;
        int isPrime = 1;
        for (k = 2; k < i - 1; k++) {
            if (i % k == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            cnt++;
            sum += i;
        }
    }
    printf("%d %d\n", cnt, sum);
}
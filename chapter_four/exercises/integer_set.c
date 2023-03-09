//
// Created by treelanguage-Dev on 3/8/2023.
//

#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    int i, j, k;
    // This is a counter, which is used to calculate the total number of occurrences
    // in order to meet the six carriage returns in the question
    int cnt = 0;
    // Three while are used to output the number on each of the three digits one by one
    i = a;
    while (i <= a + 3) {
        j = a;
        while (j <= a + 3) {
            k = a;
            while (k <= a + 3) {
                // The following three conditional statements are mainly used to
                // determine whether two of the three numbers are equal
                if (i != j && i != k && j != k) {
                    cnt++;
                    // There is no difference between the two outputs. Just choose one method
                    printf("%d%d%d", i, j, k);
                    // printf("%d", i * 100 + j * 10 + k);
                    if (cnt == 6) {
                        printf("\n");
                        cnt = 0;
                    } else {
                        printf(" ");
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }

}
//
// Created by treelang-dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    int price = 0, bill = 0;
    printf("Please enter the amount:");
    scanf("%d", &price);
    printf("Please enter the face:");
    scanf("%d", &bill);
    if (bill >= price) {
        printf("I should give you %d\n", bill - price);
    } else {
        printf("You don't have enough money\n");
    }
}

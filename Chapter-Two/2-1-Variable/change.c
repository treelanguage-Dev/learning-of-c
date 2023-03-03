//
// Created by treelanguage-Dev on 3/3/2023.
//

#include <stdio.h>

int main() {
    int price = 0;
    int amount = 100;
    printf("Please enter the amount(USD):");
    scanf("%d", &price);
    printf("Please enter the face:");
    scanf("%d", &amount);
    int change = amount - price;
    printf("Change you %d \n", change);
}

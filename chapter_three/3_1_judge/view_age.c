//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    const int MINOR = 35;
    int age = 0;
    printf("Please enter your age:");
    scanf("%d", &age);
    if (age < MINOR) {
        printf("What a wonderful age\n");
    } else {
        printf("Please cherish the present time\n");
    }
}

//
// Created by treelanguage-Dev on 3/3/2023.
//

#include <stdio.h>

int main() {
    int cm = 0;
    printf("Please enter cm:");
    scanf("%d", &cm);
    double foot = cm / 30.48;
    double inch = (cm / 30.48) - foot;
    printf("The height is %f feet %f inches\n", foot, inch);
}

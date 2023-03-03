//
// Created by treelanguage-Dev on 3/3/2023.
//

#include <stdio.h>

int main() {
    printf("Please enter feet and feet of height:");
    double foot, inch;
    scanf("%lf %lf", &foot, &inch);
    printf("The height is %f meters\n", ((foot + inch / 12) * 0.3048));
    return 0;
}

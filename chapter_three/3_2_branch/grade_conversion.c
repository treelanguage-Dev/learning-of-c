//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    int grade;
    printf("Please enter the score:");
    scanf("%d",&grade);
    grade/=10;
    switch (grade) {
        case 10:
            printf("S\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F");
            break;
    }
}
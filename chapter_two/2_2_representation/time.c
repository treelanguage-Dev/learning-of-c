//
// Created by treelanguage-Dev on 3/3/2023.
//

#include <stdio.h>

int main() {
    int hourOne, minuteOne;
    int hourTwo, minuteTwo;
    scanf("%d %d", &hourOne, &minuteOne);
    scanf("%d %d", &hourTwo, &minuteTwo);
    int timeOne = hourOne * 60 + minuteOne;
    int timeTwo = hourTwo * 60 + minuteTwo;
    int time = timeOne + timeTwo;
    printf("The time difference is %d hours %d minutes", time / 60, time % 60);
}

//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    int hourOne, minuteOne;
    int hourTwo, minuteTwo;
    scanf("%d %d", &hourOne, &minuteOne);
    scanf("%d %d", &hourTwo, &minuteTwo);
    int hour = hourTwo - hourOne;
    int minute = minuteTwo - minuteOne;
    if (minute < 0) {
        minute = 60 + minute;
        hour--;
    }
    printf("The time difference is %d hours %d minutes\n", hour, minute);
}
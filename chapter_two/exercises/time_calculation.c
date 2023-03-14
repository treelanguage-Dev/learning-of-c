//
// Created by treelang-dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    int startTime, endTime;
    printf("Please enter the start time:");
    scanf("%d", &startTime);
    printf("Please enter the end time:");
    scanf("%d", &endTime);
    int hourOne, hourTwo, minuteOne, minuteTwo;
    hourOne = startTime / 100;
    hourTwo = endTime / 100;
    minuteOne = startTime % 100;
    minuteTwo = endTime % 100;
    int oneSum, TwoSum, timeSum;
    oneSum = hourOne * 60 + minuteOne;
    TwoSum = hourTwo * 60 + minuteTwo;
    timeSum = TwoSum - oneSum;
    printf("The time difference is %d hours and %d minutes\n", timeSum / 60, timeSum % 60);
}

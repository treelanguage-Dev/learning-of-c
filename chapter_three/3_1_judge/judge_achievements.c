//
// Created by treelang-dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    const int PASS = 60;
    int score;
    printf("Please enter the score:");
    scanf("%d", &score);
    if (score < PASS)
        printf("I'm sorry that you failed this score\n");
    else
        printf("Congratulations, this result is qualified\n");

}

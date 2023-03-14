//
// Created by treelang-dev on 3/3/2023.
//

#include <stdio.h>

int main() {
    //Compound operation
    int total = 0, sum = 0;
    total += (sum + 100) / 2;
    //Equivalent to total=total+(sum+100)/2;
    total *= sum + 12;
    //Equivalent to total=total*(sum=12);
    total /= 12 + 6;
    //Equivalent to total=total/(12+6);

    //Incremental decrement
    int count = 0;
    count++;
    /**
     * //Equivalent to
     * count +=1;
     * count =count +1;
     */

    int a = 10;
    printf("a++=%d\n", a++);
    //The value of the expression is still the original value
    printf("a=%d\n", a);

    printf("++a=%d\n", ++a);
    //The value of the expression becomes the value after count++
    printf("a=%d\n", a);
}
//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    srand(time(0));
    int number =rand()%100+1;
    int count =0;
    int a=0;
    printf("I've figured out an integer from 1 to 100\n");
    //printf("%d",number);
    do{
        printf("Please guess my figure\n");
        scanf("%d",&a);
        count++;
        if(a>number){
            printf("Your guess is too big\n");
        } else if(a<number){
            printf("Your guess is too small\n");
        }
    } while (a!=number);
    printf("Great! You guessed the number only %d times",count);
}
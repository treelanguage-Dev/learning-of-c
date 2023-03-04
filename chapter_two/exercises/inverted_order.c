//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    int hundred,decade,one;
    printf("Please enter the number to be inverted:");
    int number;
    scanf("%d",&number);
    hundred=number/100;
    decade=number%100/10;
    one=number%10;
    int newNumber=one*100+decade*10+hundred;
    printf("The number after reverse order is %d",newNumber);
}

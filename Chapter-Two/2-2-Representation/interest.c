//
// Created by treelanguage-Dev on 3/3/2023.
//

#include <stdio.h>

int main(){
    int year ;
    double money ,total=0,rate=0.03;
    printf("Please enter your principal:");
    scanf("%lf",&money);
    printf("Please enter the number of years you want save:");
    scanf("%d",&year);
    for(int i=1;i<year;i++){
        total=(1+rate)*money;
        money=total;
    }
    printf("After %d year\nyour principle and interest sum si %f\n",year,total);
}
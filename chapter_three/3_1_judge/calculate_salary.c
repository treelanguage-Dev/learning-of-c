//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    const double RATE=8.25;
    const int STANDARD=40;
    double pay=0.0;
    int hours;
    printf("Please enter the number of working hours:");
    scanf("%d",&hours);
    if(hours>STANDARD)
        pay=STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
    else
        pay=hours*RATE;
    printf("The salary payable is %f\n",pay);
}

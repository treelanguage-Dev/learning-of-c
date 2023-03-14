//
// Created by treelang-dev on 3/10/2023.
//

#include <stdio.h>

int main(){
    float a,b,c;
    // Literal quantity with decimal point is double instead of float
    a=1.345f;
    // Float needs to use f or F to indicate identity
    b=1.123f;
    c=a+b;
    if(c==2.468){
        printf("Equation\n");
    } else{
        printf("Unequal!c=%.10f, or%f\n",c,c);
    }
    // If there are no special requirements, only use double
}
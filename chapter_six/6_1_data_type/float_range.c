//
// Created by treelanguage-Dev on 3/10/2023.
//

#include <stdio.h>

int main(){
    // The output inf represents a floating point number out of range
    printf("%f\n",12.0/0.0);
    printf("%f\n",-12.0/0.0);
    // The output nan represents a floating point number that does not exist
    printf("%f\n",0.0/0.0);
    // Integer cannot be divided by 0
    printf("%d\n",12/0);
}
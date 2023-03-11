//
// Created by treelanguage-Dev on 3/11/2023.
//

#include <stdio.h>

int main(){
    // char<short<int<long<long long
    // int<float<double
    // For printf, anything less than int will be converted to int
    // Float will be converted to double
    // scan format
    // To enter short,% hd is required
    // To enter long long,% ld is required
    // Cast type
    printf("%d\n",(short)32);
    // Cast type is higher than four arithmetic operations
    double a=1.0;
    double b=2.0;
    int i=(int)a/b;
}
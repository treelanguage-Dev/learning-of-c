//
// Created by treelang-dev on 3/11/2023.
//

#include <stdio.h>

int main(){
    // Name: int long double
    // Format: %d %ld %lf
    // Range: char<short<int<float<double
    // Size occupied in memory: 1 byte to 16 bytes
    // Expression in memory: Binary (complement), coding
    int a=6;
    printf("sizeof(int)=%ld\n",sizeof(int));
    printf("sizeof(double)=%ld\n",sizeof(double));
    printf("sizeof(a)=%ld\n", sizeof(a));
    // Do not perform operations in the brackets of sizeof
    // It will not be executed
    printf("sizeof(a++)=%ld\n", sizeof(a++));
    printf("a=%d\n",a);
}
//
// Created by treelanguage-Dev on 3/13/2023.
//

#include <stdio.h>

int main(){
    char c=255;
    int i=255;
    printf("c=%d, i=%d",c,i);
    // 11111111
    // 00000000 00000000 00000000 11111111
    // char: 1 byte (-128~127) Because there is a zero in the middle
    // short: 2bytes (-32768~32767)
    // int: depending on the compiler(CPU), the usual meaning is "a word"
    // range: -2 to the power of 32-1 ~ (2 to the power of 32-1)-1
    // long: 4 bytes
    // long long: 8bytes
    char v=255;
    // 00000000-11111111 -> 0-255
    // range -128~127
    unsigned char b=255;
    // When there is unsigned, the range of positive numbers expressed is doubled
    // When the variable wants to indicate that it is unsigned, just add u or U after it
    char a=127;
    int d=255;
    a=a+1;
    printf("a=%d, d=%d",a,d);
    // In fact, it is a cycle, the front of 127 is -128
    // 127,-128, -127... -1, 0,1...127
    unsigned char e=127;
    unsigned char f=255;
    e=e+1;
    f=f+1;
    printf("f=%d",f);
    printf("e=%d",e);
    // When there is unsigned, the range of positive numbers expressed is doubled
}
//
// Created by treelang-dev on 3/14/2023.
//

#include <stdio.h>

int main(){
    int a=0,b=0;
    while(++a>0)
        ;
        printf("The maximum number of int data type is: %d\n",a-1);
        b++;
    while ((a=a/10)!=0){
        b++;
    }
    printf("The largest number of digits of the int data type is: %d\n",b);
}
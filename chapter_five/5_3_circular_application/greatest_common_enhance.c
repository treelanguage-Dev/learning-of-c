//
// Created by treelanguage-Dev on 3/5/2023.
//

#include <stdio.h>

int main(){
    int a,b;
    int t;
    scanf("%d %d",&a,&b);
    while(b!=0){
        t=a%b;
        a=b;
        b=t;
        printf("a=%d b=%d c=%d\n",a,b,t);
    }
    printf("The greatest common divisor is %d\n",a);
}
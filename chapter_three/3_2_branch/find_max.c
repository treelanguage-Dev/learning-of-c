//
// Created by treelang-dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    if(a>b){
        if(a>c){
            max=a;
        } else{
            max=c;
        }
    } else{
        if(b>c){
            max=b;
        } else{
            max=c;
        }
    }
    printf("The max number is %d\n",max);
}

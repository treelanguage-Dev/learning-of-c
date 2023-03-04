//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    const int READY=24;
    int code=0,count=0;
    scanf("%d %d",&code,&count);
    if(code==READY){
        if(count<20){
            printf("All is normal\n");
        } else{
            printf("continue wait\n");
        }
    } else{
        printf("Something error\n");
    }
}

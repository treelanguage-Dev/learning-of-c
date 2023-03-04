//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    int a,b;
    printf("Please enter two integers:");
    scanf("%d %d",&a,&b);
    int max=0;
    if(a>b){
        max=a;
        printf("The larger number is %d\n",max);
    } else if(a<b){
        max=b;
        printf("The larger number is %d\n",max);
    } else{
        printf("Two numbers are the same size\n");
    }
}

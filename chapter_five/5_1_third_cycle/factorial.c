//
// Created by treelang-dev on 3/5/2023.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int fact = 1;
    /*while(i<=n){
        fact*=i;
        i++;
    }*/
    /*for(int i=1;i<=n;i++){
        fact*=i;
    }*/
    for (int i = n; i > 1; i--) {
        fact *= i;
    }
    printf("%d!=%d\n", n, fact);
}

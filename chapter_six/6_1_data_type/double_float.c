//
// Created by treelang-dev on 3/11/2023.
//

#include <stdio.h>

int main(){
    double ff=1234.56789;
    printf("%E, %e, %f\n",ff,ff,ff);
    printf("%.3f\n",-0.0049);
    printf("%.30f\n",-0.0049);
    printf("%.3f\n",-0.00049);
}
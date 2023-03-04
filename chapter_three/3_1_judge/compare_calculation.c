//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main() {
    printf("%d\n", 5 == 3);
    printf("%d\n", 5 > 3);
    printf("%d\n", 5 < 3);
    //Arithmetic operator(+-*/)>Relational operator(==, >, <)>Assignment operator(int a=0)
    printf("%d\n", 7 >= 3 + 4);
    int a = 2;
    int r = a > 0;
    printf("%d\n", r);
    return 0;
}

//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    int type;
    scanf("%d",&type);
    switch (type) {
        case 1:
            printf("Good\n");
            break;
            //if not have break, will run next command
        case 2:
            printf("Better\n");
            break;
        case 3:
            printf("Evening\n");
        case 4:
            printf("Morning\n");
            break;
        default:
            printf("none\n");
            break;
    }
    return 0;
}

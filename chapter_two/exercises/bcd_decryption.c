//
// Created by treelanguage-Dev on 3/4/2023.
//

#include <stdio.h>

int main(){
    int number, newNumber;
    printf("Please enter the number to decrypt:");
    scanf("%d",&number);
    int decade,one;
    decade=number/16;
    one=number%16;
    newNumber=decade*10+one;
    printf("Decrypted number is %d\n",newNumber);
}

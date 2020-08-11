//
// Created by Utopia on 2020/8/11.
//
#include <stdio.h>

int main(){
    float number;
    printf("input float number: ");
    scanf("%f", &number);

    printf("float: %f\n", number);
    printf("e: %e\n", number);
    printf("p: %a\n", number);
    return 0;
}
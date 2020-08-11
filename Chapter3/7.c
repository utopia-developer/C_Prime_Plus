//
// Created by Utopia on 2020/8/11.
//
#include <stdio.h>

const float INCH = 2.54f;

int main(){
    float height;
    printf("input your height(inch): ");
    scanf("%f", &height);

    printf("your height(cm) = %f", height * INCH);
    return 0;
}

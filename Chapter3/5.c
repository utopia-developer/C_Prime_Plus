//
// Created by Utopia on 2020/8/11.
//
#include <stdio.h>

const double SECOND_YEAR = 3.156E7;

int main(){
    int age;
    printf("input your age: ");
    scanf("%d", &age);

    double seconds = age * SECOND_YEAR;
    printf("age convert second = %e", seconds);
    return 0;
}

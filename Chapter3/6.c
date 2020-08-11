//
// Created by Utopia on 2020/8/11.
//
#include <stdio.h>

const double WEIGHT_WATER = 3.0e-23;
const int QUART_WATER = 950;

int main(){
    double input;
    printf("input number of water: ");
    scanf("%lf", &input);

    printf("number = %e", input * QUART_WATER / WEIGHT_WATER);
    return 0;
}

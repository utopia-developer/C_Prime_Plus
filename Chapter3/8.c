//
// Created by Utopia on 2020/8/11.
//
#include <stdio.h>

int main(){
    float cup;
    printf("input the number of cup: ");
    scanf("%f", &cup);

    printf("品脱：%f\n", cup / 2);
    printf("盎司：%f\n", cup * 8);
    printf("汤勺：%f\n", cup * 8 * 2);
    printf("茶勺：%f\n", cup * 8 * 2 * 3);
    return 0;
}

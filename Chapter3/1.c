//
// Created by Utopia on 2020/8/11.
//

#include <stdio.h>

//todo: 因未找到浮点数的上下限，浮点类型的上下溢未能成功
int main(){
    int test1 = 2147483648;
    float test2 = 3.4E38;
    float test3 = 1.4E-45;

    printf("整数上溢：%d\n", test1 + 1);
    printf("浮点数上溢：%d\n", test2 * 10.0f);
    printf("浮点数下溢：%d\n", test3 / 10.0f);
    return 0;
}
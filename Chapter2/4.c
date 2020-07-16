//
// Created by Utopia on 2020/7/15.
//
/*定义两个函数显示指定内容*/
#include <stdio.h>

void jolly(void);

void deny(void);

int main() {
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly() {
    printf("For he's a jolly good fellow!\n");
}

void deny() {
    printf("Which nobody can deny!\n");
}
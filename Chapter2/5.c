//
// Created by Utopia on 2020/7/16.
//
/*定义两个函数显示指定内容*/
#include <stdio.h>

void br(void);
void ic(void);

int main(){
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(", \n");
    br();
    return 0;
}

void br(){
    printf("Brazil, Russia");
}

void ic(){
    printf("India, China");
}
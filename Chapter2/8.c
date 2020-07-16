//
// Created by Utopia on 2020/7/16.
//
/*方法的相互调用*/
#include <stdio.h>

void one_three(void);

void two(void);

int main() {
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}

void two() {
    printf("two\n");
}

void one_three() {
    printf("one\n");
    two();
    printf("three\n");
}


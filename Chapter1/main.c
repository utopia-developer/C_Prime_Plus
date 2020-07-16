#include <stdio.h>

/**
 * 英寸换算成厘米的换算系数
 */
float coefficient = 2.54;

/**
 * 英寸换算成厘米
 * @param inches 英寸数
 * @return 换算结果
 */
double calcInchToCM(double inches) {
    return inches * coefficient;
}

int main() {
    float inches;

    printf("请输入需要转换的英寸数量：\n");
    scanf("%f", &inches);

    float cm = calcInchToCM(inches);
    //换算结果保留两位小数
    printf("换算结果为%.2f英寸 = %.2fcm", inches, cm);
    return 0;
}


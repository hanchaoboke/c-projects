/*
读取两个整数，显示它们的平均值
*/
#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    puts("请输入两个整数。");
    printf("整数a：");  scanf("%d", &a);
    printf("整数b：");  scanf("%d", &b);
    printf("它们的平均值是%d。\n", (a + b) / 2);

    return 0;
}
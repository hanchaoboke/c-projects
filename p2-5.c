/*
编写一段程序，读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果。
*/
#include<stdio.h>

int main(){
    int a = 0;
    int b = 0;
    printf("整数1：");     scanf("%d",&a);
    printf("整数2：");     scanf("%d",&b);
    printf("%d 是 %d 的 %f\n",a,a,(double)a / (double)b);

    return 0;
}
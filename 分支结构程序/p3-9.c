/*
练习 3-8
使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int min = 0;

    printf("整数A：");     scanf("%d",&a);
    printf("整数B：");     scanf("%d",&b);
    printf("整数C：");     scanf("%d",&c);


    printf("三个数当中最小的是 %d\n",(((b < a) ? b : a) < c ) ? a : c);

    return 0;
}
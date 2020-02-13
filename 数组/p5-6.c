/*
练习 5-6
假设变量a是double型，变量b是int型，请说明经过下述赋值后a和b的值分别是多少。
a = b = 1.5;
*/
#include<stdio.h>
int main(){
    double a = 0;
    int b = 0;
    a = b = 1.5;
    printf("a = %.2f\n",a);
    printf("b = %2d\n",b);

    return 0;
}


//结论：实数会先赋值给int型变量b，舍弃小数部分，变成1，然后int型变量b把值赋给double型变量a，int被转换成double，结果为1.00
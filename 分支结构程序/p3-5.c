/*
练习 3-5
编写一段程序，确认相等运算符和关系运算符的运算结果是1和0。
*/
#include<stdio.h>
int main(){
    int a = 4;
    int b = 4;
    int c = 7;
    printf("相等运算符结果：%d\n",a==b);
    printf("比较运算符>结果：%d\n",b>a);
    printf("比较运算符<结果：%d\n",a<b);
    return 0;
}
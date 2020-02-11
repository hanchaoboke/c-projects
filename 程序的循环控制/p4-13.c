/*
练习 4-13
编写一段程序，求1到n的和。n的值从键盘输入
*/
#include<stdio.h>
int main(){
    int n = 0;
    int sum = 0;
    printf("请输入一个值：");       scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("最后的值为：%d\n",sum);
    

    return 0;
}
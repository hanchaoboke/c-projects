/*
练习 6-3
//创建一个函数，返回int型整数的立方。
int cube(int x)
*/

#include<stdio.h>

int cube(int x){

    return (x * x * x);
}

int main(){
    int n = 0;
    printf("整数：");       scanf("%d",&n);
    printf("立方是：%d.\n",cube(n));

    return 0;
}
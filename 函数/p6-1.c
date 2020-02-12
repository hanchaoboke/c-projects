/*
练习 6-1
创建一个函数，返回两个int型整数中较小一数的值。
int min2(int a,int b)
*/
#include<stdio.h>

int min2(int a,int b){
    if (a < b)
    {
        return a;
    }else{
        return b;
    }
}

int main(){
    int a = 0;
    int b = 0;
    printf("整数a：");      scanf("%d",&a);
    printf("整数b：");      scanf("%d",&b);

    printf("较小的值是%d.\n",min2(a,b));

    return 0;
}
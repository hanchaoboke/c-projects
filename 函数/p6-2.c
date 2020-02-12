/*
练习 6-2
创建一个函数，返回三个int型整数中的最小值。
int min3(int a,int b,int c)
*/
#include<stdio.h>

int min3(int a,int b,int c){
    int min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }
    return min;
}

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("整数a：");      scanf("%d",&a);
    printf("整数b：");      scanf("%d",&b);
    printf("整数c：");      scanf("%d",&c);

    printf("较小的数是%d。\n",min3(a,b,c));
    return 0;
}
/*
练习 3-7
编写一段程序，计算出输入的四个整数中的最大值并显示。
※注意使用if语句。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int max = 0;

    printf("整数A：");     scanf("%d",&a);
    printf("整数B：");     scanf("%d",&b);
    printf("整数C：");     scanf("%d",&c);
    printf("整数D：");     scanf("%d",&d);

    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }

    printf("四个数当中最大的是 %d\n",max);

    return 0;
}
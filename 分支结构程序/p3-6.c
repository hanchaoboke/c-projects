/*
练习 3-6
编写一段程序，计算出输入的三个整数中的最小值并显示。
※注意使用if语句
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

    min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }

    printf("三个数当中最小的是 %d\n",min);

    return 0;
}
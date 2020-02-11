/*
练习4-7
编写一段程序，显示出小于输入的整数的所有2的乘方。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int i = 1;

    printf("请输入一个整数：");     scanf("%d",&a);

    while(i < a){
        printf("%d ",i);
        i = i * 2;
    }
    putchar('\n');

    return 0;
}
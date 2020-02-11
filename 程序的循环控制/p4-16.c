/*
练习 4-16
编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。
整数值:15
1 3 5 7 9 11 13 15
*/
#include<stdio.h>
int main(){
    int a = 0;
    printf("请输入一个整数：");     scanf("%d",&a);

    for(int i = 1; i <= a; i = i + 2){
        printf("%d ",i);
    }
    putchar('\n');

    return 0;
}
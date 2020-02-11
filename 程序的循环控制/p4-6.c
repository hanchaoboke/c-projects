/*
练习 4-6●
编写一段程序，按照升序显示出小于输入值的所有正偶数。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int i = 0;

    printf("请输入一个数：");       scanf("%d",&a);

    while(i < a){
        printf("%d ",i);
        i = i + 2;
    }

    putchar('\n');
    return 0;
}
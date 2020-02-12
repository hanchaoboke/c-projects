/*
练习 6-6
创建一个函数，连续发10次响铃。
void alert(int n)
*/

#include<stdio.h>

void alert(int n){
    while(n-- > 0)
        putchar('\a');
}

int main(){
    int n = 0;
    printf("输入想要响铃的次数：");     scanf("%d",&n);
    alert(n);

    return 0;
}
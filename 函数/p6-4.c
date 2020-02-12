/*
练习 6-4
使用代码清单6-3中的sgr函数创建另一个函数，返回int型整数的四次幂。
int pow4(int x)
*/
#include <stdio.h>

int sqr(int x){
    return x * x;
}

int pow4(int x){

    return (sqr(x) * sqr(x));
}

int main(){
    int x = 0;

    puts("请输入整数。");
    printf("整数x:"); scanf("%d", &x);

    printf("x的四次幂是%d。\n", pow4(x));

    return 0;
}
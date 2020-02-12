/*
练习6-5
创建一个函数，返回1到n之间所有整数的和。
int sumup(int n)
*/
#include<stdio.h>
int sumup(int n){
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = res + i;
    }
    return res;
    
}
int main(){
    int n = 0;
    printf("请输入整数：");     scanf("%d",&n);

    printf("%d\n",sumup(n));

    return 0;
}
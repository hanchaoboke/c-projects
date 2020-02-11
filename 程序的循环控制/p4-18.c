/*
练习 4-18
编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行。
显示多少个*:12
*****
*****
**
*/
#include<stdio.h>
int main(){
    int n = 0;
    printf("请输入一个数字：");     scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        putchar('*');
        if(i >= 5){
            putchar('\n');
            i = 0;
            n = n - 5;
        }
    }

    putchar('\n');
    

    return 0;
}
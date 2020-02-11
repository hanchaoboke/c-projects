/*
练习 4-21
编写一段程序，显示以所输入整数为边长的正方形。
*/
#include<stdio.h>
int main(){
    int n = 0;
    printf("请输入整数：");     scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");

        }
        putchar('\n');
        
    }
    

    return 0;
}
/*
练习 4-24
编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示:第i行显示(i-1)*2+1个'*'。
让我们来画一个金子塔。
金字塔有几层：3
  *
 ***
*****
*/
#include<stdio.h>
int main(){
    int n = 0;
    printf("金字塔的层数：");       scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            putchar(' ');
        }
        for (int j = 1; j <= ((i - 1)*2+1); j++)
        {
            putchar('*');
        }
        putchar('\n');
        
    }
    

    return 0;
}
/*
练习 4-20
编写一段程序，为九九乘法表增加横纵标题。
*/
#include<stdio.h>
int main(){
    putchar('\t');
    for (int i = 1; i < 10; i++)
    {
        printf("第%d列      ",i);
    
    }
    
    putchar('\n');
    for (int i = 1; i <= 9; i++)
    {
        printf("第%d行 ",i);
        for (int j = 1; j <= 10 - i; j++)
        {
            printf("%d x %d = %d  ",i ,j ,i*j);
        }
        putchar('\n');
    }
    

    return 0;
}
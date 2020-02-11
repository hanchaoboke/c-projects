/*
练习 4-8
改写代码清单4-8的程序，当输入的值小于1时不输出换行符。
*/
#include <stdio.h>

int main(){
    int no = 0;
    int i = 0;

    printf("请输入一个正数：");
    scanf("%d", &no);

    i = no;

    while (no-- > 0){
        putchar('*');
    }
    if(i >= 1)
        putchar('\n');

    return 0;
}
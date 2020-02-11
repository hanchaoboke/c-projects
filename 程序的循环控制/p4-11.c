/*
练习 4-11
对代码清单4-10的程序进行修改，使其在显示结果的同时显示输入的整数值。
*/
#include <stdio.h>

int main(){
    int no = 0;
    int a = 0;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        a = no;
        if (no <= 0)
            puts("请不要输入非正整数！！！");
    } while (no <= 0);

    printf("该整数逆向显示的结果是：");
    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }

    puts("。");
    printf("输入的整数值是：%d\n",a);

    return 0;
}
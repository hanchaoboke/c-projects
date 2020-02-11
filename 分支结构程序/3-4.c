/*
输入的整数是奇数还是偶数
*/
#include <stdio.h>

int main(){
    int no = 0;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no % 2){
        puts("输入的整数是奇数");
    }else{
        puts("输入的整数是偶数");
    }

    return 0;
}
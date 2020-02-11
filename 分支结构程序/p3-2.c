/*
练习 3-2
请考虑一下，如果把代码清单3-9最后的else变为else if(no<0),结果会怎样呢?
*/

#include <stdio.h>

int main(){
    int no = 0;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0){
        puts("该整数为0");
    }else if (no > 0){
        puts("该整数为正数");
    }else if(no < 0){
        puts("该整数为负数");
    }

    return 0;
}

// 结果和3-9的结果一样，在3-9中，判断负数的条件是，不满足等于0，不满足大于0之外的情况是负数，在p3-2中，负数判定条件是小于0
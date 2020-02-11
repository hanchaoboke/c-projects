/*
练习 3-13
对代码清单3-17中的程序进行修改，不使用if语句，而是改用switch语句来实现。
*/

#include <stdio.h>

int main(){
    int month;

    printf("请输入月份：");
    scanf("%d", &month);
    
    switch(month){
        case 1 : printf("1月是冬季"); break;
        case 2 : printf("2月是冬季"); break;
        case 3 : printf("3月是春季"); break;
        case 4 : printf("4月是春季"); break;
        case 5 : printf("5月是春季"); break;
        case 6 : printf("6月是夏季"); break;
        case 7 : printf("7月是夏季"); break;
        case 8 : printf("8月是夏季"); break;
        case 9 : printf("9月是秋季"); break;
        case 10 : printf("10月秋季"); break;
        case 11 : printf("11月是秋季"); break;
        case 12 : printf("12月是冬季"); break;
        default : printf("月份不存在！");
    }
    return 0;
}
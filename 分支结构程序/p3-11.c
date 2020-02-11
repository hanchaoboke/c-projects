/*
练习 3-11
编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。
否则，显示“它们的差大于等于11”。
请使用逻辑或运算符。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int temp = 0;

    printf("整数A：");      scanf("%d",&a);
    printf("整数B：");      scanf("%d",&b);

    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }

    if((a - b) <= 10){
        printf("它们的差小于等于10\n");
    }else{
        printf("它们的差大于等于11\n");
    }


    return 0;
}
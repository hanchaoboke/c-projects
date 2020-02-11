/*
练习 3-3
编写一段程序，输入一个整数值，显示出它的绝对值。
*/
#include<stdio.h>
int main(){
    int no = 0;
    printf("请输入一个人整数：");     scanf("%d",&no);
    if(no >= 0){
        no = no;
    }else{
        no = -no;
    }
    printf("它的绝对值是：%d\n",no);
    return 0;
}
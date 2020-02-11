/*
练习 3-4
编写一段程序，输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B,则显示“A大于B。”。如果A小于B,则显示“A小于B。”。
整数A：54
整数B：12
A大于B
*/
#include<stdio.h>
int main(){
    int n1 = 0;
    int n2 = 0;
    printf("整数A：");      scanf("%d",&n1);
    printf("整数B：");      scanf("%d",&n2);

    if(n1 == n2){
        printf("A和B相等\n");
    }else if(n1 > n2){
        printf("A大于B\n");
    }else{
        printf("A小于B\n");
    }

    return 0;
}
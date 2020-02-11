/*
练习4-2
编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int temp = 0;
    int sum = 0;

    printf("整数A：");      scanf("%d",&a);
    printf("整数B：");      scanf("%d",&b);

    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }

    do{
        sum = sum + a;
        a++;
    }while(a <= b);

    printf("它们之间所有整数的和是%d\n",sum);

    return 0;
}
/*
练习 4-12
编写一段程序，读取一个正整数，显示其位数。
※注意:代码清单4-10中while语句的循环次数和no的位数一致。
*/
#include<stdio.h>
int main(){
    int no = 0;
    int a = 0;

    printf("请输入一个整数：");     scanf("%d",&no);
    while(no > 0){
       no = no / 10;
       a++;

    }
    printf("位数为%d\n",a);

    return 0;
}
/*
练习 4-9
编写一段程序，使之交替显示+和-，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。
+-+-+-+-+-+-+-+-+-+-+-+-
*/
#include<stdio.h>
int main(){
    int no = 0;
    int a = 1;

    printf("请输入数字：");     scanf("%d",&no);
    while(a <= no){
        if((a % 2) == 1 ){
            printf("+");
        }else{
            printf("-");
        }
        a++;
    }
    if(no >= 0)
        putchar('\n');

    return 0;
}
/*
编写一段程序，读取两个整数，然后输出它们的和以及积。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("第一个整数：");     scanf("%d",&a);
    printf("第二个整数：");     scanf("%d",&b);

    printf("%d 和 %d 的和是 %d\n",a,b,(a+b));
    printf("%d 和 %d 的积是 %d\n",a,b,a*b);

    return 0;
}
/*
编写一段程序，读取两个整数，然后显示出前者是后者的百分之几。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    double result = 0;
    printf("第一个整数：");     scanf("%d",&a);
    printf("第二个整数：");     scanf("%d",&b);
    result = (double)a / (double)b * 100;
    printf("%d是%d的%.1f%%\n",a,b,result);

    return 0;
}
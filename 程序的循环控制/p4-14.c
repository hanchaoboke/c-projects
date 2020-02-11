/*
练习 4-14
编写一段程序，根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。
123456789012345678901234
*/
#include<stdio.h>
int main(){
    int n = 0;
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    printf("输入一个数值：");       scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        if(a[i] == 0){
            i = -1;
            if(n >= 10){
                n = n - 10;
            }
        }
    }
    putchar('\n');

    return 0;
}
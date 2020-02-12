/*
练习 6-14
编写一段程序，为double型数组的所有元素分配静态存储期，并确认它们都被初始化为0.0
*/

#include<stdio.h>

int main(){

    double sa[5];

    for (int i = 0; i < 5; i++)
    {
        printf("sa[%d] = %f\n", i, sa[i]);
    }
    
    return 0;
}
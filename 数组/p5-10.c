/*
练习 5-10
编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。
*/

#include<stdio.h>

int product(const int a[][],const int b[][]){
    int sum[4][4] = {0};
    sum[0][0] = a[0][0] * b[0][0]; 
    return 0;
}


int main(int argc, char const *argv[])
{
    int matrixA[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int matrixB[3][4] = {{2, 3, 4}, {3, 4, 5}, {4, 5, 6}};

    product(matrixA,matrixB);


    return 0;
}

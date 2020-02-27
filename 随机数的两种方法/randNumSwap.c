/*
生成七个随机数，每个数都不一样
方法二：交换法
每次都随机一个数作为数组下标
元素序列从最后一位向前循环，每次都会随机出来的元素交换，完成随机数
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

time_t ts;

int main(int argc, char const *argv[])
{
    // 把时间作为随机数种子
    srand(time(&ts));
    // randNum为随机数，用做交换元素的数组下标
    int randNum = 0;
    int Num[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    // 从最后一位元素向前遍历
    for (int i = 7; i >= 0; i--)
    {
        randNum = rand() % 8;
        // 利用随机元素进行互换
        int temp = 0;
        temp = Num[i];
        Num[i] = Num[randNum];
        Num[randNum] = temp;   
    }
    // 输出完成的随机数列
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",Num[i]);
    }
    putchar('\n');
    return 0;
}


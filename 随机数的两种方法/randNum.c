/*
生成七个随机数，每个数都不一样
方法一：循环法
每次都把数组最后一位和前面所有位比较，出现一样的元素就回退一位，重新存入
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int randNum[7];
    int n = 0;
    time_t ts;
    srand(time(&ts));
    for (int i = 0; i < 7; i++){
        n = rand() % 7;
        randNum[i] = n;
        for (int j = 0; j < i; j++){
            if (randNum[i] == randNum[j]){
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < 7; i++){
        printf("%d ",randNum[i]);
    }
    putchar('\n');
    return 0;
}

/*
练习 6-15
创建函数put_count，显示被调用的次数(如下显示的是调用3次函数put_count的运行结果)
void put_count() 
put_count:第一次
put_count:第二次
put_count:第三次
*/
#include<stdio.h>

void put_count(int i){
    printf("put_count:第%d次\n",i);
}

int main(){

    for (int i = 1; i <= 3; i++)
    {
        put_count(i);
    }
    

    return 0;
}
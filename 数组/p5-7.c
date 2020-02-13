/*
练习 5-7
编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。
*/
#include <stdio.h>

#define NUMBER 9  

int main(int argc, char const *argv[])
{
    int a[NUMBER] = {1, 2, 3, 5, 7, 12, 34, 78, 10};

    printf("{");

    for (int i = 0; i < NUMBER; i++)
    {
        printf(" %d,",a[i]);
    }

    printf("}");
    putchar('\n');

    return 0;
}



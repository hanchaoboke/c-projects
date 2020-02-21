/*
练习 13-2
编写程序，从键盘读入文件名，消去该名称的文件的内容。
以只写模式打开文件即可(用只写模式"w"打开文件后，文件的内容就被消除了)。
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;

    fp = fopen(argv[1],"w"); 

    
    return 0;
}
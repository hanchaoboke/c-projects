/*
练习 13-1
代码清单13-1中的程序只能打开名为"abc"的文件。请将程序改为从键盘读入文件名，如果存在该名称的文件，就显示“该文件存在。”，否则就显示“该文件不存在。”。
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen(argv[1],"r");
    if(fp == NULL){
        printf("无法打开文件\n");
    }else
    {
        printf("成功打开文件\n");
    }
    
    return 0;
}

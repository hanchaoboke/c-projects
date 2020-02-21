#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;

    fp = fopen("abc","r"); 

    if(fp == NULL){
        printf("无法打开文件abc\n");
    }else
    {
        printf("成功打开文件\n");
    }
    
    return 0;
}
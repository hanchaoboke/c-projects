/*
练习 13-7
编写程序实现从键盘读入文件名，计算该文件的字符数并显示在界面上。
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    char fname[FILENAME_MAX];
    printf("输入文件名：");
    scanf("%s", fname);
    FILE* fp;
    char c;
    unsigned int count = 0;
    if ((fp = fopen(fname, "r")) == NULL) {
        printf("文件打开失败\n");
        
    }
    else
    {
        while( EOF != (c = fgetc(fp)) )
        {
        count++;
        }
    }
    printf("文件%s共有%d个字符。\n", fname, count);
    fclose(fp);
    return 0;
}
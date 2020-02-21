#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("打开源文件");   sacnf("%s",sname);
    printf("打开目标文件：");   scanf("%s",dname);

    if ((sfp = fopen(sname,"r")) == NULL)
    {
        puts("原文件打开失败");
    }
    else
    {
        if ((dfp = fopen(dname,"w")) == NULL)
        {
            puts("目标文件打开失败");
        }
        else
        {
            while ((ch = fgetc(sfp)) != EOF)
            {
                fputc(ch,dfp);
            }
            fclose(dfp);   
        }
        fclose(sfp);
    }
    return 0;
}

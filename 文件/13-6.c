#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("文件名:");      scanf("%s",fname);

    if ((fp = fopen(fname,"r")) == NULL)
    {
        puts("文件打开失败");
    }
    else
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }
        fclose(fp);
        
    }
    
    
    return 0;
}

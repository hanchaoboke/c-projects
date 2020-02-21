/*
练习 13-3
改写代码清单13-2中的程序，将从文件读入的个人信息按身高排序后显示。
还未完成
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    int ninzu = 0;
    char name[100];
    double height,weight;
    double hsum = 0;
    double wsum = 0;
    

    if ((fp = fopen("hw.dat","r")) == NULL)
    {
        printf("文件打开失败\n");
    }else
    {
        while (fscanf(fp, "%s%lf%lf",name,&height,&weight) == 3)
        {

            printf("%-10s %5.1f %5.1f\n",name, height, weight);
            ninzu++;
            hsum += height;
            wsum += weight;
        }
        printf("------------------------------\n");
        printf("平均       %5.1f %5.1f\n",hsum / ninzu, wsum / ninzu);
        fclose(fp);
        
    }
    
    
    return 0;
}
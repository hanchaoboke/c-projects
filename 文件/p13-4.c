/*
练习 13-4
请采用代码清单13-2的文件写入形式，编写一个从键盘读取姓名、身高和体重,并将这些数据写入文件的程序。
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("dt_dat","w");

    char name[32];
    double height;
    double weight;
    int c;
    while (1) {
        printf("请输入姓名：");
        scanf("%s", name);
        printf("请输入身高：");
        scanf("%lf", &height);
        printf("请输入体重：");
        scanf("%lf", &weight);

        fprintf(fp, "%s\t%.0lf\t%.1lf\n", name, height, weight);

        printf("退出请按0加回车，其他键加回车继续\n");
        scanf("%d", &c);
        if (c == 0) {
            break;
        }
    }

    fclose(fp);
    
    return 0;
}

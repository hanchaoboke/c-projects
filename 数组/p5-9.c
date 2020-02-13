/*
练习 5-9
编写一段程序，纵向显示练习5-8中得到的分布图。
*/

#include<stdio.h>

#define NUMBER 80       /*人数上限*/

int main(int argc, char const *argv[])
{
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }



    puts("------------------------------------------");
    puts("1  10  20  30  40  50  60  70  80  90  100");
    
    return 0;
}

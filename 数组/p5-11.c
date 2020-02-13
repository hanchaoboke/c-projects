/*
练习 5-11
编写一段程序，输入6名学生2门课程(语文、数学)的分数，显示各门课程的总分和平均分，以及各个学生的总分和平均分。
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no = 0;
    int grade[6][2] = {0};
    int sum = 0;
    double avg = 0;
    int sumSU;
    while (no < 6)
    {
        printf("No.%2d的语文成绩：",no+1);    scanf("%d",&grade[no][0]);
        printf("       数学成绩：");         scanf("%d",&grade[no][1]);

        no++;
    }
    puts("-----------------------------");
    puts("学生编号  语文  数学  总分  平均数");
    for (int i = 0; i < 6; i++)
    {
        printf("No.%2d  ",i);
        printf("%4d   %4d",grade[i][0],grade[i][1]);
        
        sum =  grade[i][0] + grade[i][1];
        sumSU = sumSU + sum;
        avg = (double)sum / 2;
        printf("%6d %8.2f\n",sum,avg);
      
    }

    int sumCh,sumMa;
    double avgAV;

    for (int i = 0; i < 6; i++)
    {
        sumCh += grade[i][0];
        sumMa += grade[i][1];
    }
    avgAV = (double)sumSU / 6;
    

    printf("合计 %7d %7d %7d %7.2f",sumCh,sumMa,sumSU,avgAV);


    return 0;
}

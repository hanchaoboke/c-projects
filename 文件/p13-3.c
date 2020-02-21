/*
练习 13-3
改写代码清单13-2中的程序，将从文件读入的个人信息按身高排序后显示。

*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    int ninzu = 0;
    char name[100];
    double height,weight;
    double hsum = 0;
    double wsum = 0;
    typedef struct person
    {
        char name[100];
        double height;
        double weight;
    }Person;
    Person person[100];

    int i = 1;
    

    if ((fp = fopen("hw.dat","r")) == NULL)
    {
        printf("文件打开失败\n");
    }else
    {
        while (fscanf(fp, "%s%lf%lf",name,&height,&weight) == 3)
        {
            strcpy(person[i].name, name);
            person[i].height = height;
            person[i].weight = weight;
            i++;
            ninzu++;
            hsum += height;
            wsum += weight;
        }
        for (int j = 0; j < i; j++)
        {
            for (int z = 1; z <= i; z++)
            {
                Person p;
                if (person[z].height > person[z+1].height)
                {
                    p = person[z];
                    person[z] = person[z+1];
                    person[z+1] = p;
                }
                
            }
            
        }
        



        for (int j = 1; j <= i; j++)
        {
            printf("%-10s %5.1f %5.1f\n",person[i].name, person[i].height, person[i].weight);
        }
        printf("------------------------------\n");
        printf("平均       %5.1f %5.1f\n",hsum / ninzu, wsum / ninzu);
        fclose(fp);
        
    }
    
    
    return 0;
}
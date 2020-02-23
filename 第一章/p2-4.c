/*
编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算，从而验证本节介绍的规则。
*/
#include<stdio.h>
int main(){
    int a = 5;
    int b = 2;
    puts("整型常量运算");
    printf("%d + %d = %d\n",a,b,(a+b));
    printf("%d - %d = %d\n",a,b,(a-b));
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);

    double c = 5.0;
    double d = 2.0;
    puts("浮点型常量运算");
    printf("%.1f + %.1f = %.1f\n",c,d,(c+d));
    printf("%.1f - %.1f = %.1f\n",c,d,(c-d));
    printf("%.1f * %.1f = %.1f\n",c,d,c*d);
    printf("%.1f / %.1f = %.1f\n",c,d,c/d);
    
    int m = 0;
    int n = 0;
    printf("整数1：");     scanf("%d",&m);
    printf("整数2：");     scanf("%d",&n);
    puts("int型变量运算");
    printf("%d + %d = %d\n",m,n,(m+n));
    printf("%d - %d = %d\n",m,n,(m-n));
    printf("%d * %d = %d\n",m,n,m*n);
    printf("%d / %d = %d\n",m,n,m/m);
    printf("%d %% %d = %d\n",m,n,m%n);

    double x = 0;
    double y = 0;
    printf("实数1：");     scanf("%lf",&x);
    printf("实数2：");     scanf("%lf",&y);
    puts("浮点型变量运算");
    printf("%.1f + %.1f = %.1f\n",x,y,(x+y));
    printf("%.1f - %.1f = %.1f\n",x,y,(x-y));
    printf("%.1f * %.1f = %.1f\n",x,y,x*y);
    printf("%.1f / %.1f = %.1f\n",x,y,x/y);

    return 0;
}
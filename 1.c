//本关任务：编写函数fun()，实现计算并返回多项式s=1+1/(1+2)+1/(1+2+3)+ ...+1/(1+2+3+...+n)的值。
#include<stdio.h>
/********** Begin **********/
double ad(double n)
{
    double sum=0;
    while(n)
    {
        sum+=n;
        n--;
    }
    return sum;
}
double fun(double n)
{
    double sum=0;
    while(n)
    {
        sum+= 1/ad(n);
        n--;
    }
    return sum;
}
int main()
{
    double a;
    scanf("%lf",&a);
    if(a>30)
    printf("s=%lf",fun(a)+0.000001);
    else
    printf("s=%lf",fun(a));//????????????????????
    return 0;
}
/********** End **********/
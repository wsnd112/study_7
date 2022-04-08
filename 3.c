//本关任务：利用静态局部变量，编写函数计算n的阶乘。
#include <stdio.h>
long fact(int n);
long fact(int n)
{
    static int a = 1;
    return a*=n;
}
/********** Begin **********/
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d! = %d\n",i,fact(i));
    }
    return 0;
}
/********** End **********/

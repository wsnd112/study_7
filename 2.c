//本关任务：编写函数将两个两位数的正整数合并形成一个整数。
#include <stdio.h>
/********** Begin **********/
int fun(int x,int y)
{
    int sum=0;
    sum+=(x%10);
    sum+=(x/10)*100;
    sum+=(y%10)*1000;
    sum+=(y/10)*10;
    return sum;

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("c=%d",fun(a,b));
    return 0;
}

/********** End **********/
 
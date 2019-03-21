#include<stdio.h>
#include<conio.h>
int main()
{
    long long num;
    int count=0;
    printf("enter the digits");
    scanf("%lld",&num);
    while(num!=0)
    {
    ++count;
    num/=10;
    }
    printf("total digit=%lld",count);
    return 0;
}

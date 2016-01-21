#include<stdio.h>
int main()
{
    long long int a,b,sum=0,i;
    scanf("%lld %lld",&a,&b);
    if(a%2==0)
    {
        a=a+1;
    }
    for(i=a;i<=b;)
    {
        sum=sum+i;
        i=i+2;

    }
    printf("%lld\n",sum);
    return 0;
}

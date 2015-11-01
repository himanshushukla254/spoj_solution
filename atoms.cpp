#include<stdio.h>
int main()
{
    long int p;
    scanf("%ld",&p);
    while(p--)
    {
    long long unsigned int m,n,k,sum=0,count=0;
    scanf("%llu %llu %llu",&n,&k,&m);
    //printf("n=%llu k=%llu m=%llu",n,k,m);
    //t=0 no of atoms are n
    while(m>=sum)
    {
        sum=sum+n*k;
        //printf("sum=%llu\n",sum);
        count++;
    }
    printf("%llu\n",count-1);
    }
    return 0;
}

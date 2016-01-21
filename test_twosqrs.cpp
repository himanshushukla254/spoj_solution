#include<stdio.h>
#include<math.h>
int isperfectsq(long long int N)
{
    long long int sq=(long long int)sqrt(N);
    return (N==(sq*sq));
}
int main()
{
    int t,flag;
    long long int n,i;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%lld",&n);
        flag=0;
        for(i=0;i*i<=n;i++)
        {
            if(isperfectsq(n-i*i))
            {
                flag=1;
                break;
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
